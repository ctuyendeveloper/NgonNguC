#include <stdio.h>
int main(int argc, char const *argv[])
{
    int min, max;
    int i = min;
    float tong = 0, bienDem = 0, trungBinh = 0;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);
    printf("Nhung so chia het cho 2 trong khoang[%d,%d]: ", min, max);
    while (i <= max)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            tong += i;
            bienDem++;
        }
        i++;
    }
    printf("\nTrung binh cong cac so chia het cho 2: %.2f", trungBinh = tong / bienDem);
    fflush(stdin);
    getchar();
    return (0);
}