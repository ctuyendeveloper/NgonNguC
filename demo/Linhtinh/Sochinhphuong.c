#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("\nSo muon test = ");
    scanf("%d", &x);
    int canbachai = sqrt(x);
    if (canbachai * canbachai == x)
    {
        printf("Theo Cong Tuyen!%d La so chinh phuong!", x);
    }
    else
    {
        printf("Theo Cong Tuyen!%d Khong phai so chinh phuong!", x);
    }
    fflush(stdin);
    getchar();
    return 0;
}
