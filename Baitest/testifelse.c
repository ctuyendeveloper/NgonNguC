#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("Test danh hieu hoc sinh\n");
    float diem;
    printf("Nhap so diem:");
    scanf("%f", &diem);
    if(diem >= 9 && diem <= 10)
    {
        printf("xuatxac");
    }else if(diem >= 8)
    {
        printf("gioi");
    }else if(diem >= 6.5)
    {
        printf("kha");
    }else if(diem >= 5)
    {
        printf("trungbinh");
    }else if(diem < 5)
    {
        printf("kem");
    }else
    {
        printf("Nhap Sai");
    }
    fflush(stdin);
    getchar();
    return 0;
}
