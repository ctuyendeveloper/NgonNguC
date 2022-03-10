#include <stdio.h>
int main(int argc, char const *argv[])
{
    int namNhuan;
    printf(">>>>>\tKiem tra nam nhuan!\t<<<<<");
    printf("\nNhap nam: ");
    scanf("%d", &namNhuan);
    fflush(stdin);
    if (namNhuan % 4 == 0 && namNhuan % 100 != 0 || namNhuan % 400 == 0)
    {
        printf("Day la nam nhuan!");
    }
    else
    {
        printf("Day la khong phai la nam nhuan!");
    }
    fflush(stdin);
    getchar();
    return 0;
}