#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int sochucnang;
    printf(">>>>>>>>>  MENU LAB4  <<<<<<<<<\n");
    printf("1. Chuong trinh tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
    printf("2. Chuong trinh xac dinh so nguyen to\n");
    printf("3. Chuong trinh xac dinh so chinh phuong\n");
    printf("0. Thoat!\n");
    printf("Chon chuong trinh [1-3]: ");
    scanf("%d", &sochucnang);
    fflush(stdin);
    switch (sochucnang)
    {
    case 0:
        printf("Cam on ban da su dung dich vu cua CONGTUYEN! Rat mong se duoc ho tro ban trong nhung chuong trinh sau.");
        exit(0);
        break;
    case 1:
        printf("Ban da chon Chuong trinh tinh trung binh tong cua cac so tu nhien chia het cho 2");
        int min, max;
        printf("\nNhap min: ");
        scanf("%d", &min);
        printf("Nhap max: ");
        scanf("%d", &max);
        int a = min;
        float tong = 0, bienDem = 0, trungBinh = 0;
        printf("Nhung so chia het cho 2 trong khoang[%d,%d]: ", min, max);
        while (a <= max)
        {
            if (a % 2 == 0)
            {
                printf("%d ", a);
                tong += a;
                bienDem++;
            }
            a++;
        }
        trungBinh = tong / bienDem;
        printf("\nTrung binh cong cac so chia het cho 2: %.2f", trungBinh);
        printf("\nKet thuc chuong trinh");
        break;
    case 2:
        printf("Ban da chon Chuong trinh xac dinh so nguyen to.");
        int x;
        printf("\nNhap X = ");
        scanf("%d", &x);
        if (x < 2)
        {
            printf("%d Khong phai so nguyen to", x);
            return 0;
        }
        int count = 0;
        int i;
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("Theo Cong Tuyen! %d La so nguyen to", x);
        }
        else
        {
            printf("Theo Cong Tuyen! %d Khong phai so nguyen to", x);
        }
        fflush(stdin);
        printf("\nKet thuc chuong trinh");
        break;
    case 3:
        printf("Ban da chon Chuong trinh Kiem tra so chinh phuong");
        int scp;
        printf("\nSo muon test = ");
        scanf("%d", &scp);
        int canbachai = sqrt(scp);
        if (canbachai * canbachai == scp)
        {
            printf("Theo Cong Tuyen! %d La so chinh phuong!", scp);
        }
        else
        {
            printf("Theo Cong Tuyen! %d Khong phai so chinh phuong!", scp);
        }
        fflush(stdin);
        printf("\nKet thuc chuong trinh");
        break;
    default:
        printf("Ban da nhap sai roi! Xin khoi dong lai chuong trinh");
        break;
    }
    fflush(stdin);
    getchar();
    return (0);
}