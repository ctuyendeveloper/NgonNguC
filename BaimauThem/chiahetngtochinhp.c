#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int sochucnang;
    printf(">>>>>>MENU<<<<<<\n");
    printf("1. Bai 1\n");
    printf("2. Bai 2\n");
    printf("3. Bai 3\n");
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
        printf("Bai 1");
        int min, max;
        printf("\nNhap min: ");
        scanf("%d", &min);
        printf("Nhap max: ");
        scanf("%d", &max);
        fflush(stdin);
        int a = min;
        float tong = 0, bienDem = 0, trungBinh = 0;
        printf("Nhung so chia het cho 5 trong khoang[%d,%d]: ", min, max);
        while (a <= max)
        {
            if (a % 5 == 0)
            {
                printf("%d ", a);
                tong += a;
                bienDem++;
            }
            a++;
        }
        trungBinh = tong / bienDem;
        printf("\nTrung binh cong cac so chia het cho 5: %.2f", trungBinh);
        fflush(stdin);
        break;
    case 2:
        printf("Bai 2");
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
            printf("%d La so nguyen to", x);
        }
        else
        {
            printf("%d Khong phai so nguyen to", x);
        }
        break;
    case 3:
        printf("Bai 3");
        int sotest;
        printf("\nSo muon test = ");
        scanf("%d", &sotest);
        int canbachai = sqrt(sotest);
        if (canbachai * canbachai == sotest)
        {
            printf("Theo Cong Tuyen! %d La so chinh phuong!", sotest);
        }
        else
        {
            printf("Theo Cong Tuyen! %d Khong phai so chinh phuong!", sotest);
        }
        break;
    default:
        printf("Nhap sai");
        break;
    }
    printf("\nKet thuc");
    fflush(stdin);
    getchar();
    return 0;
}
