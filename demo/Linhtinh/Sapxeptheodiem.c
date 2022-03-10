#include <stdio.h>
#include <string.h>
// cấu trúc: tập hợp các thuộc tính của 1 đối tượng
struct SinhVien
{
    char maSV[8];
    char hoTen[50];
    float diemToan;
    float diemVan;
};
void sapXep(struct SinhVien danhSachSinhVien[])
{
    int i,k;
    for (i = 0; i < 2; i++)
    {
        for (k = i + 1; k < 3; k++)
        {
            if (strcmp(danhSachSinhVien[i].hoTen, danhSachSinhVien[k].hoTen) > 0)
            {
                struct SinhVien tam;
                tam = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[k];
                danhSachSinhVien[k] = tam;
            }
            
        }

    }
    printf("Da sap xep");
}
void sapXepTheoMaSo(struct SinhVien danhSachSinhVien[])
{
    int i,k;
    for (i = 0; i < 2; i++)
    {
        for (k = i + 1; k < 3; k++)
        {
            if (strcmp(danhSachSinhVien[i].maSV, danhSachSinhVien[k].maSV) > 0)
            {
                struct SinhVien tam;
                tam = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[k];
                danhSachSinhVien[k] = tam;
            }
            
        }
    }
    printf("Da sap xep");
}
void sapXepTheoDiemToan(struct SinhVien danhSachSinhVien[])
{
    int i,k;
    for (i = 0; i < 2; i++)
    {
        for (k = i + 1; k < 3; k++)
        {
            if (danhSachSinhVien[i].diemToan < danhSachSinhVien[k].diemVan)
            {
                struct SinhVien tam;
                tam = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[k];
                danhSachSinhVien[k] = tam;
            }
            
        }
    }
    printf("Da sap xep");
}
void sapXepTheoDiemVan(struct SinhVien danhSachSinhVien[])
{
    int i,k;
    for (i = 0; i < 2; i++)
    {
        for (k = i + 1; k < 3; k++)
        {
            if (danhSachSinhVien[i].diemVan < danhSachSinhVien[k].diemToan)
            {
                struct SinhVien tam;
                tam = danhSachSinhVien[i];
                danhSachSinhVien[i] = danhSachSinhVien[k];
                danhSachSinhVien[k] = tam;
            }
            
        }
    }
    printf("Da sap xep");
}
void nhap(struct SinhVien danhSachSinhVien[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("=== Sinh Vien %d ===\n", i);
        printf("Nhap Ma so: ");
        fgets(danhSachSinhVien[i].maSV,sizeof(danhSachSinhVien[i].maSV), stdin);
        fflush(stdin);
        printf("Nhap ten: ");
        fgets(danhSachSinhVien[i].hoTen,sizeof(danhSachSinhVien[i].hoTen), stdin);
        fflush(stdin);
        printf("Nhap diem Toan: ");
        scanf("%f",&danhSachSinhVien[i].diemToan);
        fflush(stdin);
        printf("Nhap diem Van: ");
        scanf("%f",&danhSachSinhVien[i].diemVan);
        fflush(stdin);
    }
}
void xuat(struct SinhVien danhSachSinhVien[]){
    int i;
    float diemTrungBinh;
    for (i = 0; i < 3; i++)
    {
        printf("\nMa SV: %s", danhSachSinhVien[i].maSV);
        printf("\nHo Ten: %s", danhSachSinhVien[i].hoTen);
        printf("Diem: %f\n", danhSachSinhVien[i].diemToan);
        printf("Diem: %f\n", danhSachSinhVien[i].diemVan);
        diemTrungBinh = (danhSachSinhVien[i].diemVan + danhSachSinhVien[i].diemToan) / 2;
        printf("%f", diemTrungBinh);
        if (diemTrungBinh >= 5)
        {
            printf("\nXep loai: Dau\n");
        }
        else{
            printf("\nXep loai: Rot\n");
        }
    }
}
void menu()
{
    int chon;
    // Chứa thông tin của 3 sinh viên khác nhau
    struct SinhVien danhSachSinhVien[3];
    do
    {
        printf(">>> MENU <<<\n");
        printf("1. Nhap\n");
        printf("2. Xuat\n");
        printf("3. Sap Xep\n");
        printf("4. Sap Xep ma so\n");
        printf("5. Sap Xep diem toan\n");
        printf("6. Sap Xep diem van\n");
        printf("Chon chuc nang[1-4]: ");
        scanf("%d", &chon);
        fflush(stdin);
        switch (chon)
        {
        case 1:
        {
        nhap(danhSachSinhVien);
            break;
        }
        case 2:
        {
        xuat(danhSachSinhVien);
        }
            break;
        case 3:
        {
        sapXep(danhSachSinhVien);
            break;
        }
        case 4:
        sapXepTheoMaSo(danhSachSinhVien);
            break;
                    case 5:
        sapXepTheoDiemToan(danhSachSinhVien);
            break;
                    case 6:
        sapXepTheoDiemVan(danhSachSinhVien);
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