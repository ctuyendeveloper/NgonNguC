#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float numbera, numberb, numberc;
    printf("Nhap Gia tri a: ");
    scanf("%d", &numbera);
    printf("Nhap Gia tri b: ");
    scanf("%d", &numberb);
    printf("Nhap Gia tri c: ");
    scanf("%d", &numberc);
    if (numbera == 0)
    {
        if (numberb == 0)
        {
            printf("Phuong trinh co vo so nghiem\n");
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    else
    {
        printf("Phuong trinh co nghiem: X=%.2f", -numberb / numbera);
    }
    fflush(stdin);
    getchar();
    return 0;
}
    // int a, b;
    // printf("\nNhap he so a: ");
    // scanf("%f", &a);
    // printf("\nNhap he so b: ");
    // scanf("%f", &b);
    // if (a == 0)
    // {
    //     if (b == 0)
    //     {
    //         printf("\nPhuong trinh vo so nghiem");
    //     }
    //     else
    //     {
    //         printf("\nPhuong trinh vo nghiem");
    //     }
    // }
    // else
    // {
    //     printf("\nPhuong trinh co nghiem x=%g", -b / a);
    // }
    // fflush(stdin);
    // getchar();
    // return 0;