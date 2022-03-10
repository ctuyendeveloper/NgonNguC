#include <stdio.h>
#include <string.h>
struct SinhVien
{
    char hoTen[50];
    char nganhHoc[50];
    char maSV[50];
    float diem;
};
void nhap(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
{
    int i;
    int a = 1;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        printf("\n +-------------+");
        printf("\n + Sinh Vien %d +", a);
        printf("\n +-------------+\n");
        a++;
        fflush(stdin);
        printf("\nNhap Ma so sinh vien: ");
        fgets(danhSachSinhVien[i].maSV, sizeof(danhSachSinhVien[i].maSV), stdin);
        fflush(stdin);
        printf("Nhap ten: ");
        fgets(danhSachSinhVien[i].hoTen, sizeof(danhSachSinhVien[i].hoTen), stdin);
        fflush(stdin);
        printf("Nhap nganh sinh vien hoc: ");
        fgets(danhSachSinhVien[i].nganhHoc, sizeof(danhSachSinhVien[i].nganhHoc), stdin);
        fflush(stdin);
        printf("Nhap diem Trung binh: ");
        scanf("%f", &danhSachSinhVien[i].diem);
        fflush(stdin);
    }
    printf("___________________");
    printf("\n** Da nhap xong **\n");
}
void xuat(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
{
    int i;
    int a = 1;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        printf("\n +-----------------------------+");
        printf("\n + Xuat thong tin sinh vien: %d +", a);
        printf("\n +-----------------------------+\n");
        a++;
        printf("\nMa so sinh vien: %s", danhSachSinhVien[i].maSV);
        printf("Ho Ten: %s", danhSachSinhVien[i].hoTen);
        printf("Nganh Hoc: %s", danhSachSinhVien[i].nganhHoc);
        printf("Diem Trung binh: %.2f\n", danhSachSinhVien[i].diem);
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
void sapXep(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
{
    int i, b;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        for (b = i + 1; b < soLuongSinhVien; b++)
        {
            if (danhSachSinhVien[i].diem > danhSachSinhVien[b].diem)
            {
                struct SinhVien tam;
                tam = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[b];
                danhSachSinhVien[b] = tam;
            }
        }
    }
    printf("\n +--------------------------------------+\n");
    printf(" + DA SAP XEP DIEM THEO THU TU TANG DAN +");
    printf("\n +--------------------------------------+\n");
}
void timKiem(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
{
    char ma[50];
    printf("Nhap ma can tim: ");
    fgets(ma, sizeof(ma), stdin);
    fflush(stdin);
    int i;
    int index = -1;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        if (strcmp(ma, danhSachSinhVien[i].maSV) == 0)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("\n +--------------------------+");
        printf("\n + Khong tim thay sinh vien +");
        printf("\n +--------------------------+\n");
    }
    else
    {
        printf("\n +--------------------+");
        printf("\n + Tim thay sinh vien +");
        printf("\n +--------------------+\n");
        printf("\nMa so sinh vien: %s", danhSachSinhVien[index].maSV);
        printf("Ho Ten: %s", danhSachSinhVien[index].hoTen);
        printf("Nganh Hoc: %s", danhSachSinhVien[index].nganhHoc);
        printf("Diem Trung binh: %.2f\n", danhSachSinhVien[index].diem);
    }
}
// void tongDiem(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
// {
//     float tongDiemSinhVien;
//     tongDiemSinhVien = sum
// }
void menu()
{
    int soLuongSinhVien;
    int chon;
    struct SinhVien danhSachSinhVien[100];
    do
    {
        printf("\n +--------------+\n");
        printf(" + >>> LAB8 <<< +");
        printf("\n +--------------+\n");
        printf("\n1. Nhap\n");
        printf("2. Xuat\n");
        printf("3. Sap xep tang dan\n");
        printf("4. Tim kiem sinh vien theo ma Sinh Vien\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang[1-4]: ");
        scanf("%d", &chon);
        fflush(stdin);
        switch (chon)
        {
        case 0:
        {
            exit(0);
            break;
        }
        case 1:
        {
            printf("\nNhap so luong sinh vien: ");
            scanf("%d", &soLuongSinhVien);
            fflush(stdin);
            nhap(danhSachSinhVien, soLuongSinhVien);
            break;
        }
        case 2:
        {
            xuat(danhSachSinhVien, soLuongSinhVien);
            break;
        }
        case 3:
        {
            sapXep(danhSachSinhVien, soLuongSinhVien);
            break;
        }
        case 4:
        {
            timKiem(danhSachSinhVien, soLuongSinhVien);
            break;
        }
        case 5:
        {
            printf("\n +-----------------------------------------------+");
            printf("\n + Nhap sai! Vui long khoi dong lai chuong trinh +");
            printf("\n +-----------------------------------------------+\n");
            break;
        }
        default:
            printf("\n +---------------------------------------+");
            printf("\n + Nhap sai! Vui long chon lai chuc nang +");
            printf("\n +---------------------------------------+\n");
            break;
        }
    } while (chon != 5);
}
int main(int argc, char const *argv[])
{
    menu();
    fflush(stdin);
    getchar();
    return 0;
}
