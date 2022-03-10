#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("\nNhap X = ");
    scanf("%d", &x);
    int count = 0;
    int i;
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && x >= 2)
    {
        printf("%d La so nguyen to", x);
    }
    else
    {
        printf("%d Khong phai so nguyen to", x);
    }
    fflush(stdin);
    getchar();
    return 0;
}