#include <stdio.h>
void bai1()
{
    int mang[5];
    int i, n;
    int a = 1;
    int b = 1;
    for (i = 0; i < 5; i++)
    {
        printf("Phan tu %d = ", a);
        scanf("%d", &mang[i]);
        a++;
    }
    for (i = 0; i < 5; i++)
    {
        if (mang[i] % 2 == 0)
        {
            printf("\nSo Chan trong mang : %d", mang[i]);
        }
    }
    float tong = 0, bienDem = 0, trungBinh = 0;
    for (i = 0; i < 5; i++)
    {
        if (mang[i] % 5 == 0)
        {
            tong += mang[i];
            bienDem++;
            printf("\nChia het cho 5: %d", mang[i]);
        }
    }
    trungBinh = tong / bienDem;
    printf("\nTrung binh tong cac so chia het cho 5 trong mang la %.2f", trungBinh);
}
void bai2(){
        char s[100];
    printf("Xin moi nhap vao chuoi: ");
    gets(s);
    fflush(stdin);
    int i = 0, nguyenAm = 0, phuAm = 0;
    while (s[i++] != '\0')
    {
        if ((s[i] == 'a') || (s[i] == 'i') || (s[i] == 'e') || (s[i] == 'u') || (s[i] == 'o'))
        {
            nguyenAm++;
        }
    }
    printf("Chuoi '%s' co chua: %d nguyen am", s, nguyenAm);
}
void menu(){
    int chon;
    do
    {
        printf("\n +--------------------+\n");
        printf(" + >>> Bao Ve Mon <<< +");
        printf("\n +--------------------+\n");
        printf("\n1. Bai so 1\n");
        printf("2. Bai so 2\n");
        printf("3. Thoat\n");
        printf("Chon chuc nang[1-3]: ");
        scanf("%d", &chon);
        fflush(stdin);
        switch (chon)
        {
        case 1:
        {
            bai1();
            break;
        }
        case 2:
        {
            bai2();
            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
        default:
            printf("\n +---------------------------------------+");
            printf("\n + Nhap sai! Vui long chon lai chuc nang +");
            printf("\n +---------------------------------------+\n");
            break;
        }
    } while (chon != 3);

}
int main(int argc, char const *argv[])
{
    menu();
    fflush(stdin);
    getchar();
    return 0;
}