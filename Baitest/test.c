#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float numbera, numberb, numberc;
    float delta;
    float nghiem, nghiem1, nghiem2;
    printf("Nhap gia tri A: ");
    scanf("%f", &numbera);
    printf("Nhap gia tri B: ");
    scanf("%f", &numberb);
    printf("Nhap gia tri C: ");
    scanf("%f", &numberc);
    if (numbera == 0)
    {
        if (numberb == 0)
        {
            if (numberc == 0)
                printf("Phuong trinh vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");
        }
        else
            printf("Phuong trinh co mot nghiem duy nhat: %.3f", -numberc / numberb);
    }
    else
    {
        delta = numberb * numberb - 4 * numbera * numberc;
        if (delta < 0)
            printf("Phuong trinh vo nghiem");
        else if (delta == 0)
            printf("Phuong trinh co nghiem kep: %.3f", -numberb / (2 * numbera));
        else
        {
            printf("Phuong trinh co 2 nghiem rieng biet");
            printf("\nNghiem so 1: %.3f", (-numberb + sqrt(delta)) / (2 * numbera));
            printf("\nNghiem so 2: %.3f", (-numberb - sqrt(delta)) / (2 * numbera));
        }
    }
    fflush(stdin);
    getchar();
    return 0;
}
