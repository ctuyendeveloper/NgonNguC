#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n;
    int a = 1;
    printf("Nhap so phan tu muon tao vao trong mang la: ");
    scanf("%d", &n);
    int mang[n];
    for (i = 0; i < n; i++)
    {
        printf("Phan tu %d = ", a);
        scanf("%d", &mang[i]);
        if (a <= n)
        {
            a++;
        }
    }
    {
        int max = mang[0];
        for (int i = 0; i < n; i++)
        {
            if (mang[i] > max)
            {
                max = mang[i];
            }
        }
        printf("Max: %d\n", max);
    }
    {
        int min = mang[0];
        for (int i = 0; i < n; i++)
        {
            if (mang[i] < min)
            {
                min = mang[i];
            }
        }
        printf("Min: %d", min);
    }
    fflush(stdin);
    getchar();
    return 0;
}