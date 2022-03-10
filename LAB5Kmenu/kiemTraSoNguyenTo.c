// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf(">>>>>   Kiem tra so nguyen to!   <<<<<\n");
//     int x;
//     printf("Nhap so can kiem tra = ");
//     scanf("%d", &x);
//     int count = 0;
//     int i;
//     for (int i = 2; i < x; i++)
//     {
//         if (x % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 0 && x >= 2)
//     {
//         printf("Theo Cong Tuyen! %d La so nguyen to", x);
//     }
//     else
//     {
//         printf("Theo Cong Tuyen! %d Khong phai so nguyen to", x);
//     }
//     fflush(stdin);
//     printf("\nKet thuc chuong trinh");
//     getchar();
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    printf(">>>>>   Kiem tra so nguyen to!   <<<<<\n");
    int numberTest;
    printf("Nhap so can kiem tra = ");
    scanf("%f", &numberTest);
    int count = 0;
    int i;
    for (int i = 2; i < numberTest; i++)
    {
        if (numberTest % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && numberTest >= 2)
    {
        printf("Theo Cong Tuyen! %.2f La so nguyen to", numberTest);
    }
    else
    {
        printf("Theo Cong Tuyen! %.2f Khong phai so nguyen to", numberTest);
    }
    fflush(stdin);
    printf("\nKet thuc chuong trinh");
    getchar();
    return 0;
}