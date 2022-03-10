#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int sochucnang;
    printf(">>>>>>MOT SO CHUONG TRINH CO BAN!<<<<<<\n");
    printf("1. Kiem tra Danh hieu hoc sinh\n");
    printf("2. Giai phuong trinh Bac 1\n");
    printf("3. Giai phuong trinh bac 2\n");
    printf("4. Tinh tien dien da dung\n");
    printf("0. Thoat chuong trinh\n");
    printf("Chon chuc nang: ");
    scanf("%d", &sochucnang);
    switch (sochucnang)
    {
    case 0:
        printf("Cam on ban da su dung dich vu cua CONGTUYEN! Rat mong se duoc ho tro ban trong nhung chuong trinh sau.");
        exit(0);
        break;
    case 1:
        printf("Ban da chon chuong trinh Kiem tra Danh hieu hoc sinh\n");
        float diem;
        printf("Nhap so diem: ");
        scanf("%f", &diem);
        if (diem >= 9 && diem <= 10)
        {
            printf("xuatxac");
        }
        else if (diem >= 8)
        {
            printf("gioi");
        }
        else if (diem >= 6.5)
        {
            printf("kha");
        }
        else if (diem >= 5)
        {
            printf("trungbinh");
        }
        else if (diem < 5)
        {
            printf("kem");
        }
        else
        {
            printf("Nhap Sai");
        }
        break;
    case 2:
        printf("Ban da chon chuong trinh Giai phuong trinh Bac 1");
        float soa, sob;
        printf("\nNhap Gia tri a: ");
        scanf("%d", &soa);
        printf("Nhap Gia tri b: ");
        scanf("%d", &sob);
        fflush(stdin);
        if (soa == 0)
        {
            if (sob == 0)
            {
                printf("Phuong trinh co vo so nghiem\n");
            }
            else
            {
                printf("Phuong trinh vo nghiem\n");
            }
        }
        else
        {
            printf("Phuong trinh co nghiem: X=%.2f", -sob / soa);
        }
        break;
    case 3:
        printf("Ban da chon chuong trinh Giai phuong trinh Bac 2");
        float numbera, numberb, numberc;
        float delta;
        float nghiem, nghiem1, nghiem2;
        printf("\nNhap gia tri A: ");
        scanf("%f", &numbera);
        printf("Nhap gia tri B: ");
        scanf("%f", &numberb);
        printf("Nhap gia tri C: ");
        scanf("%f", &numberc);
        if (numbera == 0)
        {
            if (numberb == 0)
            {
                if (numberc == 0)
                    printf("Phuong trinh vo so nghiem");
                else
                    printf("Phuong trinh vo nghiem");
            }
            else
                printf("Phuong trinh co mot nghiem duy nhat: %.3f", -numberc / numberb);
        }
        else
        {
            delta = numberb * numberb - 4 * numbera * numberc;
            if (delta < 0)
                printf("Phuong trinh vo nghiem");
            else if (delta == 0)
                printf("Phuong trinh co nghiem kep: %.3f", -numberb / (2 * numbera));
            else
            {
                printf("Phuong trinh co 2 nghiem rieng biet");
                printf("\nNghiem so 1: %.3f", (-numberb + sqrt(delta)) / (2 * numbera));
                printf("\nNghiem so 2: %.3f", (-numberb - sqrt(delta)) / (2 * numbera));
            }
        }
        break;
    case 4:
        printf("Ban da chon chuong trinh Tinh tien dien da dung");
        float soDien, soTien;
        const float bac1 = 1.678;
        const float bac2 = 1.734;
        const float bac3 = 2.014;
        const float bac4 = 2.536;
        const float bac5 = 2.834;
        const float bac6 = 2.927;
        printf("\nNhap so dien(kWh): ");
        scanf("%f", &soDien);
        if (soDien <= 50 && soDien >= 1)
        {
            soTien = soDien * bac1;
            printf("So dien ban da su dung nam trong khoang [1,50] kWh \nSo tien can phai tra la: %.3f", soTien);
        }
        else if (soDien <= 100 && soDien >= 51)
        {
            soTien = 50 * bac1 + (soDien - 50) * bac2;
            printf("So dien ban da su dung nam trong khoang [51,100] kWh \nSo tien can phai tra la: %.3f", soTien);
        }
        else if (soDien <= 200 && soDien >= 101)
        {
            soTien = 50 * bac1 + 50 * bac2 + (soDien - 100) * bac3;
            printf("So dien ban da su dung nam trong khoang [101,200] kWh \nSo tien can phai tra la: %.3f", soTien);
        }
        else if (soDien <= 300 && soDien >= 201)
        {
            soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + (soDien - 200) * bac4;
            printf("So dien ban da su dung nam trong khoang [201,300] kWh \nSo tien can phai tra la: %.3f", soTien);
        }
        else if (soDien <= 400 && soDien >= 301)
        {
            soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + (soDien - 300) * bac5;
            printf("So dien ban da su dung nam trong khoang [301,400] kWh \nSo tien can phai tra la: %.3f", soTien);
        }
        else if (soDien >= 401)
        {
            soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + (soDien - 400) * bac6;
            printf("So dien ban da su dung hon 400 kWh \nSo tien can phai tra la: %.3f", soTien);
        }
        else
        {
            printf("So dien ban nhap khong duoc bang 0 hoac la nho hon 0! Xin hay khoi dong lai chuong trinh.");
        }
        break;
    default:
        printf("Ban da nhap sai roi! Xin khoi dong lai chuong trinh");
        break;
    }
    fflush(stdin);
    getchar();
    return 0;
}