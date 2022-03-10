#include <stdio.h>
#include <string.h>
struct XeHoi
{
    char hoTen[50];
    float diem;
};
void nhap(struct XeHoi danhSachSinhVien[], int soLuongSinhVien)
{
    int i;
    int a = 1;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        printf("\n +-------------+");
        printf("\n + Xe  %d +", a);
        printf("\n +-------------+\n");
        a++;
        fflush(stdin);
        printf("Nhap ten: ");
        fgets(danhSachSinhVien[i].hoTen, sizeof(danhSachSinhVien[i].hoTen), stdin);
        fflush(stdin);
        printf("Nhap diem Trung binh: ");
        scanf("%f", &danhSachSinhVien[i].diem);
        fflush(stdin);
    }
    printf("___________________");
    printf("\n** Da nhap xong **\n");
}
void xuat(struct XeHoi danhSachSinhVien[], int soLuongSinhVien)
{
    int i;
    int a = 1;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        printf("\n +-----------------------------+");
        printf("\n + Xuat thong tin xe hoi: %d +", a);
        printf("\n +-----------------------------+\n");
        a++;
        printf("Ten Xe: %s", danhSachSinhVien[i].hoTen);
        printf("Gia Ban: %f\n", danhSachSinhVien[i].diem);

    }
}
void sapXep(struct XeHoi danhSachSinhVien[], int soLuongSinhVien)
{
    int i, b;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        for (b = i + 1; b < soLuongSinhVien; b++)
        {
            if (danhSachSinhVien[i].diem > danhSachSinhVien[b].diem)
            {
                struct XeHoi tam;
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
void menu()
{
    int soLuongSinhVien;
    int chon;
    struct XeHoi danhSachSinhVien[100];
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
            printf("\n +---------------------------------------+");
            printf("\n + Nhap sai! Vui long chon lai chuc nang +");
            printf("\n +---------------------------------------+\n");
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
