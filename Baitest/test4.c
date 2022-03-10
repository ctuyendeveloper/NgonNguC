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
    while (i <= max)
    {
        if (i % 2 == 0)
        {
            tong += i;
            bienDem++;
        }
    }
    trungBinh = tong / bienDem;
    printf("ketqua: %f", trungBinh);
    fflush(stdin);
    getchar();
    return 0;
}
