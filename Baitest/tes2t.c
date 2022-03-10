#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Nhap so: ");
    scanf("%d", &number);
    fflush(stdin);
    int dem = 0;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            dem++;
            break;
        }
    }
    if (dem != 0 || number < 2)
    {
        printf("Day khong la so nguyen to");
    }
    else
    {
        printf("Day la so nguyen to");
    }
    getchar();
    fflush(stdin);
    return 0;
}