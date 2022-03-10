#include <stdio.h>
#include <math.h>
#include <string.h>
struct MAYTINH
{
    char maSP[7];
    char tenSP[50];
    float gia;
};
void baiLam1()
{
    int i;
    int a = 1;
    int mang[5];
    for (i = 0; i < 5; i++)
    {
        printf("Phan tu %d = ", a);
        scanf("%d", &mang[i]);
        if (a <= 5)
        {
            a++;
        }
    }
    int max;
    for (int i = 0; i < 5; i++)
    {
        if (mang[i] > max)
        {
                max = mang[i];
        }
    }
    printf("\nMax: %d\n", max);
    float tong = 0, bienDem = 0, trungBinh = 0;
    for (i = 0; i < 5; i++)
    {
        if (mang[i] % 5 == 0)
        {
            tong += mang[i];
            bienDem++;
        }
    }
    trungBinh = tong / bienDem;
    printf("Trung binh tong cac so chia het cho 3 trong mang la %.2f\n", trungBinh);
}
void baiLam2()
{
    int i, soLuongSanPham;
    printf("\nNhap so luong san pham: ");
    scanf("%d", &soLuongSanPham);
    fflush(stdin);
    struct MAYTINH danhSachSanPham[3];
    int a = 1;
    for (i = 0; i < soLuongSanPham; i++)
    {
        printf("\n +------------+");
        printf("\n + San Pham %d +", a);
        printf("\n +------------+\n");
        a++;
        fflush(stdin);
        printf("\nNhap MaSP: ");
        fgets(danhSachSanPham[i].maSP, sizeof(danhSachSanPham[i].maSP), stdin);
        printf("\nNhap ten: ");
        fgets(danhSachSanPham[i].tenSP, sizeof(danhSachSanPham[i].tenSP), stdin);
        fflush(stdin);
        printf("Nhap Gia: ");
        scanf("%f", &danhSachSanPham[i].gia);
        fflush(stdin);
    }
    int b;
    for (i = 0; i < soLuongSanPham; i++)
    {
        for (b = i + 1; b < soLuongSanPham; b++)
        {
            if (danhSachSanPham[i].gia > danhSachSanPham[b].gia)
            {
                struct MAYTINH tam;
                tam = danhSachSanPham[i];
                danhSachSanPham[i] = danhSachSanPham[b];
                danhSachSanPham[b] = tam;
            }
        }
    }
    printf("\n +---------------------------------+\n");
    printf(" + DA SAP XEP THEO THU TU TANG DAN +");
    printf("\n +---------------------------------+\n");
    int c = 1;
    for (i = 0; i < soLuongSanPham; i++)
    {
        printf("\n +--------------------------------------------+");
        printf("\n + Xuat thong tin san pham %d sau khi sap xep: +", c);
        printf("\n +--------------------------------------------+\n");
        c++;
        printf("\n Ma SP: %s", danhSachSanPham[i].maSP);
        printf("\n Ten SP: %s", danhSachSanPham[i].tenSP);
        printf("Gia: %.f\n", danhSachSanPham[i].gia);
}
}
void menu()
{
    int sochucnang;
    do
    {
        printf("\n>>>>>>\tCHAO MUNG DEN VOI PHAN MEM CUA CONG TUYEN!\t<<<<<<\n");
        printf("1. Bai 1\n");
        printf("2. Bai 2\n");
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
        {
        baiLam2();
            break;
            }
        case 3:
        {
            printf("\n +----------------------------------------------+\n");
            printf(" +>> CO 2 CHUC NANG THOI MA! KHOI DONG LAI DI <<+");
            printf("\n +----------------------------------------------+\n");
            break;
        }
        default:
            printf("Nhap sai! Vui long chon lai\n");
            break;
        }
    } while (sochucnang != 3);
}
int main(int argc, char const *argv[])
{
    menu();
    fflush(stdin);
    getchar();
    return 0;
}