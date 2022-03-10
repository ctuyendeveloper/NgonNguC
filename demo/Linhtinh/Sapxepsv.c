#include <stdio.h>
#include <string.h>
// cấu trúc: tập hợp các thuộc tính của 1 đối tượng
struct SinhVien
{
    char hoTen[50];
    float diem;
};
void nhap(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
{
    int i;
    for (i = 0; i < soLuongSinhVien; i++)
    {
        printf("\n=== Sinh Vien %d ===", i);
        fflush(stdin);
        printf("\nNhap ten: ");
        fgets(danhSachSinhVien[i].hoTen, sizeof(danhSachSinhVien[i].hoTen), stdin);
        fflush(stdin);
        printf("Nhap diem: ");
        scanf("%f", &danhSachSinhVien[i].diem);
        fflush(stdin);
    }
}
void xuat(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
{
    int i;
    for (i = 0; i < soLuongSinhVien; i++)
    {
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
void sapXep(struct SinhVien danhSachSinhVien[], int soLuongSinhVien)
{
    int i,b;
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
}
void menu()
{
    int soLuongSinhVien;
    int chon;
    struct SinhVien danhSachSinhVien[100];
    do
    {
        printf("\n>>> MENU <<<\n");
        printf("1. Nhap\n");
        printf("2. Xuat\n");
        printf("3. Sap xep giam dan\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang[1-4]: ");
        scanf("%d", &chon);
        fflush(stdin);
        switch (chon)
        {
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
        
            break;
        default:
            break;
        }
    } while (chon != 4);
}
int main(int argc, char const *argv[])
{
    menu();
    fflush(stdin);
    getchar();
    return 0;
}
