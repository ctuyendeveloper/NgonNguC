#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float numberTest;
    printf("Nhap so: ");
    scanf("%f", &numberTest);
    if (numberTest == (int)numberTest)
    {
        printf("\nDay la so nguyen");
    }
    else
    {
        printf("\nDay khong la so nguyen");
    }
    if (numberTest == (int)numberTest)
    {
        int dem = 0, n;
        n = (int)numberTest;
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
            {
                dem++;
                break;
            }
        }
        if (dem != 0 || n < 2)
        {
            printf("\nDay khong la so nguyen to");
        }
        else
        {
            printf("\nDay la so nguyen to");
        }
    }
    else
    {
        printf("\nDay khong la so nguyen to");
    }
    int canbachai = sqrt(numberTest);
    if (canbachai * canbachai == numberTest)
    {
        printf("\nTheo Cong Tuyen! %.1f La so chinh phuong!\n", numberTest);
    }
    else
    {
        printf("\nTheo Cong Tuyen! %.1f Khong phai so chinh phuong!\n", numberTest);
    }
    fflush(stdin);
    getchar();
    return 0;
}
