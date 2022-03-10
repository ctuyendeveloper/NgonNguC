#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float number1, number2, number3, nuachuvi, dientichtamgiac;
    printf("Canh thu nhat: ");
    scanf("%f", &number1);
    printf("Canh thu hai: ");
    scanf("%f", &number2);
    printf("Canh thu ba: ");
    scanf("%f", &number3);
    printf("Day la 3 canh cua tam giac\n");
    nuachuvi = (number1 + number2 + number3) / 2;
    dientichtamgiac = sqrt(nuachuvi*(nuachuvi - number1)*(nuachuvi - number2)*(nuachuvi - number3));
    printf("Ket Qua Dien Tich: %f", dientichtamgiac);
    fflush(stdin);
    getchar();
    return 0;
}