#include <stdio.h>
#include <math.h>
void baiLam1()
{
    printf("\n>>>>>>\tChuong trinh kiem tra so nguyen\t<<<<<<");
    int x;
    printf("\nNhap so muon kiem tra = ");
    scanf("%d", &x);
    int count = 0;
    int i;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && x >= 2)
    {
        printf("Theo Cong Tuyen! %d La so nguyen to\n", x);
    }
    else
    {
        printf("Theo Cong Tuyen! %d Khong phai so nguyen to\n", x);
    }
    int canbachai = sqrt(x);
    if (canbachai * canbachai == x)
    {
        printf("Theo Cong Tuyen! %d La so chinh phuong!\n", x);
    }
    else
    {
        printf("Theo Cong Tuyen! %d Khong phai so chinh phuong!\n", x);
    }
}
void baiLam2()
{
}
void baiLam3()
{
    // Nhập giờ bắt đầu và giờ kết thúc
    // Hiện tiền thanh toán
    // Giá tiền 3 giờ đầu là 150.000
    // Bắt đầu giờ thứ 4 giảm 30%.
    // Quán chỉ hoạt động trong khoảng 12 giờ > 23 giờ
    // Nếu giờ bắt đầu trong khoảng 14 > 17 thì giảm tiếp 10% tổng tiền thanh toán
    printf("Chuong trinh Tinh tien cho quan Karaoke\n");
    int startHours, endHours, hours;
    do
    {
        printf("Gio bat dau: ");
        scanf("%d", &startHours);
        fflush(stdin);
        printf("Gio ket thuc: ");
        scanf("%d", &endHours);
        fflush(stdin);
        if (startHours < 12 || startHours > 23 || endHours < 12 || endHours > 23)
        {
            printf("Ngoai gio hoat dong! Nhap lai\n");
        }
    } while (startHours < 12 || startHours > 23 || endHours < 12 || endHours > 23);
    if (startHours > endHours)
    {
        int temp = startHours;
        startHours = endHours;
        endHours = temp;
    }
    hours = endHours - startHours;
    float threeHour = 150.000;
    float oneHour = 50.000;
    float payMent;
    if (hours <= 3)
    {
        payMent = oneHour * hours;
    }
    else
    {
        payMent = threeHour + (hours - 3) * 35.000;
    }
    if (startHours >= 14 && startHours <= 17)
    {
        payMent = payMent * 90 / 100;
    }
    printf("So tien can phai thanh toan la: %.3f", payMent);
}
void baiLam4()
{
    printf("\n>>>>>>\tChuong trinh Tinh tien dien\t<<<<<<");
    float soDien, soTien;
    printf("\nNhap so dien(kWh): ");
    scanf("%f", &soDien);
    fflush(stdin);
    const float bac1 = 1.678;
    const float bac2 = 1.734;
    const float bac3 = 2.014;
    const float bac4 = 2.536;
    const float bac5 = 2.834;
    const float bac6 = 2.927;
    if (soDien <= 50 && soDien >= 1)
    {
        soTien = soDien * bac1;
        printf("So dien ban da su dung nam trong khoang [1,50] kWh \nSo tien can phai tra la: %.3f VND\n", soTien);
    }
    else if (soDien <= 100 && soDien >= 51)
    {
        soTien = 50 * bac1 + (soDien - 50) * bac2;
        printf("So dien ban da su dung nam trong khoang [51,100] kWh \nSo tien can phai tra la: %.3f VND\n", soTien);
    }
    else if (soDien <= 200 && soDien >= 101)
    {
        soTien = 50 * bac1 + 50 * bac2 + (soDien - 100) * bac3;
        printf("So dien ban da su dung nam trong khoang [101,200] kWh \nSo tien can phai tra la: %.3f VND\n", soTien);
    }
    else if (soDien <= 300 && soDien >= 201)
    {
        soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + (soDien - 200) * bac4;
        printf("So dien ban da su dung nam trong khoang [201,300] kWh \nSo tien can phai tra la: %.3f VND\n", soTien);
    }
    else if (soDien <= 400 && soDien >= 301)
    {
        soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + (soDien - 300) * bac5;
        printf("So dien ban da su dung nam trong khoang [301,400] kWh \nSo tien can phai tra la: %.3f VND\n", soTien);
    }
    else if (soDien >= 401)
    {
        soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + (soDien - 400) * bac6;
        printf("So dien ban da su dung hon 400 kWh \nSo tien can phai tra la: %.3f VND\n", soTien);
    }
    else
    {
        printf("So dien ban nhap khong duoc bang 0 hoac la nho hon 0! Xin hay khoi dong lai chuong trinh.\n");
    }
}
void baiLam6()
{
    printf("Chuong trinh Vay lai suat ngan hang\n");
    const float Lai_Suat = 0.05; // lai suat 5%
    const int Ky_Han = 12;       // ky han phai tra
    float soTienVay;
    float soTienLai;          // = sotienvay * laisuat
    float soTienGocHangThang; // = sotienvay / ky han
    float soTienTraHangThang; // = sotienlai + sotiengochangthang
    printf("Nhap so tien vay: ");
    scanf("%f", &soTienVay);
    fflush(stdin);
    printf("%-15s%-15s%-15s%-15s%-15s\n", "Ky Han", "Lai", "Goc", "Phai Tra", "Con Lai");
    soTienGocHangThang = soTienVay / Ky_Han;
    for (int i = 1; i <= 12; i++)
    {
        soTienLai = soTienVay * Lai_Suat;
        soTienTraHangThang = soTienLai + soTienGocHangThang;
        soTienVay = soTienVay - soTienGocHangThang;
        printf("%-15d%-15.3f%-15.3f%-15.3f%-15.3f\n", i, soTienLai, soTienGocHangThang, soTienTraHangThang, soTienVay);
    }
}
void menu()
{
    int sochucnang;
    do
    {
        printf("\n>>>>>>\tCHAO MUNG DEN VOI PHAN MEM CUA CONG TUYEN!\t<<<<<<\n");
        printf("1. Kiem Tra So Nguyen\n");
        printf("2. Tim Uoc chung, boi chung\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Vay lai suat ngan hang\n");
        printf("7. Vay mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game Lucky FPOLY-LOTT\n");
        printf("10. Tinh phan so\n");
        printf("0. Thoat!\n");
        printf("Chon chuc nang: ");
        scanf("%d", &sochucnang);
        switch (sochucnang)
        {
        case 0:
            printf("Thoat! Chuong trinh");
            exit(0);
            break;
        case 1:
        {
            baiLam1();
            break;
        }
        case 2:
            printf("Chuong trinh Tim Uoc chung, boi chung\n");
            break;
        case 3:
        {
            baiLam3();
            break;
        }
        case 4:
        {
            baiLam4();
            break;
        }
        case 5:
            printf("Chuong trinh Doi tien\n");
            break;
        case 6:
        {
            baiLam6();
            break;
        }
        case 7:
            printf("Chuong trinh Vay mua xe\n");
            break;
        case 8:
            printf("Chuong trinh Sap xep thong tin sinh vien\n");
            break;
        case 9:
            printf("Chuong trinh Game Lucky FPOLY-LOTT\n");
            break;
        case 10:
            printf("Chuong trinh Tinh phan so\n");
            break;
        default:
            printf("Nhap sai! Vui long chon lai\n");
            break;
        }
    } while (sochucnang != 10);
}
int main(int argc, char const *argv[])
{
    menu();
    fflush(stdin);
    getchar();
    return 0;
}
// void daoChuoi()

// {
//     char test[] = "Hello\n";
//     char chuoi[100];
//     printf
// }
