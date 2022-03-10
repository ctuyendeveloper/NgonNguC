#include <stdio.h>
#include <math.h>
#include <string.h>
struct SinhVien
{
    char hoTen[50];
    float diem;
};
struct PhanSo
{
    int tuSo;
    int mauSo;
};
int uocChungLonNhat(int so1, int so2)
{
    while (so1 != so2)
    {
        if (so1 > so2)
        {
            so1 = so1 - so2;
        }
        else
        {
            so2 = so2 - so1;
        }
    }
    return so2;
}
void kiemTraSoNguyen()
{
    printf("\n>>>>>>\tChuong trinh kiem tra so nguyen\t<<<<<<");
    float numberTest;
    printf("\nNhap so muon kiem tra: ");
    scanf("%f", &numberTest);
    if (numberTest == (int)numberTest)
    {
        printf("\nTheo Cong Tuyen! %.1f la so nguyen", numberTest);
    }
    else
    {
        printf("\nTheo Cong Tuyen! %.1f khong la so nguyen", numberTest);
    }
    if (numberTest == (int)numberTest)
    {
        int dem = 0, n;
        n = (int)numberTest;
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                dem++;
                break;
            }
        }
        if (dem != 0 || n < 2)
        {
            printf("\nTheo Cong Tuyen! %.1f khong la so nguyen to", numberTest);
        }
        else
        {
            printf("\nTheo Cong Tuyen! %.1f la so nguyen to", numberTest);
        }
    }
    else
    {
        printf("\nTheo Cong Tuyen! %.1f khong la so nguyen to", numberTest);
    }
    int canbachai = sqrt(numberTest);
    if (canbachai * canbachai == numberTest)
    {
        printf("\nTheo Cong Tuyen! %.1f La so chinh phuong!\n", numberTest);
    }
    else
    {
        printf("\nTheo Cong Tuyen! %.1f Khong phai so chinh phuong!\n", numberTest);
    }
}
void uocChungBoiChung()
{
    printf("\n>>>>>>\tChuong trinh tim uoc chung va boi chung\t<<<<<<\n");
    int so1, so2;
    printf("So thu nhat: ");
    scanf("%d", &so1);
    fflush(stdin);
    printf("So thu hai: ");
    scanf("%d", &so2);
    fflush(stdin);
    int uocChung = uocChungLonNhat(so1, so2);
    printf("Uoc chung lon nhat: %d", uocChung);
    int boiChungNhoNhat;
    boiChungNhoNhat = (so1 * so2) / uocChung;
    printf("\nBoi chung nho nhat: %d\n", boiChungNhoNhat);
}
void tinhTienKaraoke()
{
    // Nhập giờ bắt đầu và giờ kết thúc
    // Hiện tiền thanh toán
    // Giá tiền 3 giờ đầu là 150.000
    // Bắt đầu giờ thứ 4 giảm 30%.
    // Quán chỉ hoạt động trong khoảng 12 giờ > 23 giờ
    // Nếu giờ bắt đầu trong khoảng 14 > 17 thì giảm tiếp 10% tổng tiền thanh toán
    printf("\n>>>>>>\tChuong trinh tinh tien cho quan karaoke\t<<<<<<\n");
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
    printf("So tien can phai thanh toan la: %.3f VND\n", payMent);
}
void tinhTienDien()
{
    printf("\n>>>>>>\tChuong trinh tinh tien dien\t<<<<<<");
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
void vayLaiSuatNganHang()
{
    printf("\n>>>>>>\tChuong trinh tinh tien vay lai xuat ngan hang\t<<<<<<\n");
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
void sapXepSinhVien()
{
    printf("\n>>>>>>\tChuong trinh sap xep sinh vien\t<<<<<<\n");
    int i, soLuongSinhVien;
    printf("\nNhap so luong sinh vien: ");
    scanf("%d", &soLuongSinhVien);
    fflush(stdin);
    struct SinhVien danhSachSinhVien[100];
    int a = 1;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        printf("\n +-------------+");
        printf("\n + Sinh Vien %d +", a);
        printf("\n +-------------+\n");
        a++;
        fflush(stdin);
        printf("\nNhap ten: ");
        fgets(danhSachSinhVien[i].hoTen, sizeof(danhSachSinhVien[i].hoTen), stdin);
        fflush(stdin);
        printf("Nhap diem: ");
        scanf("%f", &danhSachSinhVien[i].diem);
        fflush(stdin);
    }
    int b;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        for (b = i + 1; b < soLuongSinhVien; b++)
        {
            if (danhSachSinhVien[i].diem < danhSachSinhVien[b].diem)
            {
                struct SinhVien tam;
                tam = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[b];
                danhSachSinhVien[b] = tam;
            }
        }
    }
    printf("\n +---------------------------------+\n");
    printf(" + DA SAP XEP THEO THU TU GIAM DAN +");
    printf("\n +---------------------------------+\n");
    int c = 1;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        printf("\n +---------------------------------------------+");
        printf("\n + Xuat thong tin sinh vien %d sau khi sap xep: +", c);
        printf("\n +---------------------------------------------+\n");
        c++;
        printf("\nHo Ten: %s", danhSachSinhVien[i].hoTen);
        printf("Diem: %.2f\n", danhSachSinhVien[i].diem);
        if (danhSachSinhVien[i].diem <= 10 && danhSachSinhVien[i].diem >= 9)
        {
            printf("Hoc luc xuat sac\n");
        }
        else if (danhSachSinhVien[i].diem < 9 && danhSachSinhVien[i].diem >= 8)
        {
            printf("Hoc luc gioi\n");
        }
        else if (danhSachSinhVien[i].diem < 8 && danhSachSinhVien[i].diem >= 6.5)
        {
            printf("Hoc luc kha\n");
        }
        else if (danhSachSinhVien[i].diem < 6.5 && danhSachSinhVien[i].diem >= 5)
        {
            printf("Hoc luc trung binh\n");
        }
        else if (danhSachSinhVien[i].diem < 5 && danhSachSinhVien[i].diem >= 0)
        {
            printf("Hoc luc yeu\n");
        }
        else
        {
            printf("Nhap sai\n");
        }
    }
}
void tinhPhanSo()
{
    printf("\n>>>>>>\tChuong trinh tinh phan so\t<<<<<<\n");
    struct PhanSo phanSo1;
    struct PhanSo phanSo2;
    printf("Phan so 1\n");
    printf("Nhap tu so: ");
    scanf("%d", &phanSo1.tuSo);
    fflush(stdin);
    printf("Nhap mau so: ");
    scanf("%d", &phanSo1.mauSo);
    fflush(stdin);

    printf("Phan so 2\n");
    printf("Nhap tu so: ");
    scanf("%d", &phanSo2.tuSo);
    fflush(stdin);
    printf("Nhap mau so: ");
    scanf("%d", &phanSo2.mauSo);
    fflush(stdin);
    printf("\n +----------------+ \n");
    printf(" + Tinh toan xong + ");
    printf("\n +----------------+ \n");
    struct PhanSo ketQuaPhepCong, ketQuaPhepTru, ketQuaPhepNhan, ketQuaPhepChia;
    ketQuaPhepCong.tuSo = phanSo1.tuSo * phanSo2.mauSo + phanSo1.mauSo * phanSo2.tuSo;
    ketQuaPhepCong.mauSo = phanSo1.mauSo * phanSo2.mauSo;
    printf("\nKet qua phep cong: %d/%d", ketQuaPhepCong.tuSo, ketQuaPhepCong.mauSo);
    ketQuaPhepTru.tuSo = phanSo1.tuSo * phanSo2.mauSo - phanSo1.mauSo * phanSo2.tuSo;
    ketQuaPhepTru.mauSo = phanSo1.mauSo * phanSo2.mauSo;
    printf("\nKet qua phep tru: %d/%d", ketQuaPhepTru.tuSo, ketQuaPhepTru.mauSo);
    ketQuaPhepNhan.tuSo = phanSo1.tuSo * phanSo2.tuSo;
    ketQuaPhepNhan.mauSo = phanSo1.mauSo * phanSo2.mauSo;
    printf("\nKet qua phep nhan: %d/%d", ketQuaPhepNhan.tuSo, ketQuaPhepNhan.mauSo);
    ketQuaPhepChia.tuSo = phanSo1.tuSo * phanSo2.mauSo;
    ketQuaPhepChia.mauSo = phanSo1.mauSo * phanSo2.tuSo;
    printf("\nKet qua phep chia: %d/%d\n", ketQuaPhepChia.tuSo, ketQuaPhepChia.mauSo);
}
void menu()
{
    int sochucnang;
    do
    {
        printf("\n         >>>>>> MOT SO CHUC NANG CO BAN <<<<<\n");
        printf(" +----------------------------------------------------+\n");
        printf(" | 1. Kiem Tra So Nguyen                              |\n");
        printf(" | 2. Tim Uoc chung, boi chung                        |\n");
        printf(" | 3. Tinh tien cho quan Karaoke                      |\n");
        printf(" | 4. Tinh tien dien                                  |\n");
        printf(" | 5. Vay lai suat ngan hang                          |\n");
        printf(" | 6. Sap xep thong tin sinh vien                     |\n");
        printf(" | 7. Tinh toan phan so                               |\n");
        printf(" | 0. Thoat!                                          |\n");
        printf(" +----------------------------------------------------+\n");
        printf(" Chon chuc nang [1-7]: ");
        scanf("%d", &sochucnang);
        switch (sochucnang)
        {
        case 0:
            exit(0);
            break;
        case 1:
        {
            kiemTraSoNguyen();
            break;
        }
        case 2:
        {
            uocChungBoiChung();
            break;
        }
        case 3:
        {
            tinhTienKaraoke();
            break;
        }
        case 4:
        {
            tinhTienDien();
            break;
        }
        case 5:
        {
            vayLaiSuatNganHang();
            break;
        }
        case 6:
        {
            sapXepSinhVien();
            break;
        }
        case 7:
        {
            tinhPhanSo();
            break;
        }
        case 8:
        {
            printf("\n +----------------------------------------------+\n");
            printf(" +>> CO 7 CHUC NANG THOI MA! KHOI DONG LAI DI <<+");
            printf("\n +----------------------------------------------+\n");
            break;
        }
        default:
            printf("\n +---------------------------+\n");
            printf(" +>> NHAP SAI! NHAP LAI DI <<+");
            printf("\n +---------------------------+\n");
            break;
        }
    } while (sochucnang != 8);
}
int main(int argc, char const *argv[])
{
    menu();
    fflush(stdin);
    getchar();
    return 0;
}