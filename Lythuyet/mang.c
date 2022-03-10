#include <stdio.h>
#include <math.h>
/**
 * Mảng - Array: tập hợp các phần tử cùng kiểu dữ liệu
 * Khai báo: <kiểu dữ liệu> <tên mảng>[<số lượng phần tử>]
 * Chỉ số của mảng chạy từ 0 -> (kích thước -1)
*/

void xuatMang(int mang[], int soLuongPhanTu)
{
    for (int i = 0; i < soLuongPhanTu; i++)
    {
        printf("Phan tu thu %d: %d\n", i, mang[i]);
    }
}

void nhapMang(int mang[], int soLuongPhanTu)
{
    for (int i = 0; i < soLuongPhanTu; i++)
    {
        printf("Nhap phan tu %d: ", i);
        scanf("%d", &mang[i]);
        fflush(stdin);
    }
}
// in ra phần tử số lẻ của mảng
void timKiem(int mang[], int soLuongPhanTu, int soCanTim)
{
    int viTri = -1;
    for (int i = 0; i < soLuongPhanTu; i++)
    {
        if (mang[i] == soCanTim)
        {
            viTri = i;
            break;
        }
    }
    printf("Vi tri tim duoc: %d\n", viTri);
}
void sapXep(int mang[], int soLuongPhanTu)
{
    for (int i = 0; i < soLuongPhanTu - 1; i++)
    {
        for (int k = i + 1; k < soLuongPhanTu; k++)
        {
            if (mang[i] < mang[k])
            {
                int temp = mang[i];
                mang[i] = mang[k];
                mang[k] = temp;
            }
        }
    }
    printf("Da sap xep\n");
}
// in ra phần tử lớn nhất của mảng
void inPhanTuLonNhatCuaMang(int mang[], int soLuongPhanTu)
{
    int soLonNhat = mang[0];
    for (int i = 0; i < soLuongPhanTu; i++)
    {
        if (mang[i] > soLonNhat)
        {
            soLonNhat = mang[i];
        }
    }
    printf("So lon nhat: %d\n", soLonNhat);
}

void demoMang()
{
    // mảng số nguyên có tối đa 10 phần tử
    int mangSoNguyen[10];
    // mảng số thập phân có tối đa 5 phần tử
    // float mangSoThapPhan[5] = {1.2, 6.7, 8.9, 5.5, 4.5};

    // nhập mảng
    nhapMang(mangSoNguyen, 10);
    printf(">>>>>>>>>><<<<<<<<<<\n");
    // xuất mảng
    // xuatMang(mangSoNguyen, 10);
    // in số lẻ
    // inPhanTuSoLeCuaMang(mangSoNguyen, 10);
    // printf(">>>>>>>>>><<<<<<<<<<\n");
    // phần tử lớn nhất
    inPhanTuLonNhatCuaMang(mangSoNguyen, 10);
    printf(">>>>>>>>>><<<<<<<<<<\n");
}

void menu()
{
    int mang[20];
    int soLuongPhanTu;
    int chon;
    do
    {
        printf(">>>>> Menu <<<<<\n");
        printf("1. Nhap mang\n");
        printf("2. Xuat mang\n");
        printf("3. Tim kiem\n");
        printf("4. Sap xep\n");
        printf("5. Thoat\n");
        printf("Chon [1-5]: ");
        scanf("%d", &chon);
        fflush(stdin);
        switch (chon)
        {
        case 1:
        {
            do
            {
                printf("Nhap so phan tu: ");
                scanf("%d", &soLuongPhanTu);
                fflush(stdin);
            } while (soLuongPhanTu < 1 || soLuongPhanTu > 19);
            nhapMang(mang, soLuongPhanTu);
            break;
        }
        case 2:
        {
            xuatMang(mang, soLuongPhanTu);
            break;
        }
        case 3:
        {
            int soCanTim;
            printf("Nhap so can tim: ");
            scanf("%d", &soCanTim);
            timKiem(mang, soLuongPhanTu, soCanTim);
            break;
        }
        case 4:
        {
            sapXep(mang, soLuongPhanTu);
            break;
        }
        case 5:
            break;
        default:
            printf("Nhap sai roi, lai di\n");
            break;
        }
    } while (chon != 5);
}
int main(int argc, char const *argv[])
{

    menu();
    printf("\nKet thuc");
    fflush(stdin);
    getchar();
    return 0;
}