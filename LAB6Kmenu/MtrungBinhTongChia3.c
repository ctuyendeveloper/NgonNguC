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
    float tong = 0, bienDem = 0, trungBinh = 0;
    for (i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0)
        {
            tong += mang[i];
            bienDem++;
            printf("\nChia het cho 3: %d", mang[i]);
        }
    }
    trungBinh = tong / bienDem;
    printf("\nTrung binh tong cac so chia het cho 3 trong mang la %.2f", trungBinh);
    fflush(stdin);
    getchar();
    return 0;
}