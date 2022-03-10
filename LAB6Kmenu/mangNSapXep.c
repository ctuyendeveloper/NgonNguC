#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n;
    int a = 1;
    int b = 1;
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
        for (int i = 0; i < n - 1; i++)
        {
            for (int k = i + 1; k < n; k++)
            {
                if (mang[i] < mang[k])
                {
                    int temp = mang[i];
                    mang[i] = mang[k];
                    mang[k] = temp;
                }
            }
        }
        printf(">>>>>  Da sap xep mang theo thu tu giam dan!  <<<<<\n");
    }
    {
        for (int i = 0; i < n; i++)
        {
            printf("Phan tu %d: %d\n", b, mang[i]);
            if (b <= n)
            {
                b++;
            }
        }
    }
    fflush(stdin);
    getchar();
    return 0;
}
