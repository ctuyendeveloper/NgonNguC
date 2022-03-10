#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf(">>>>>   Tim gia tri lon nhat trong 3 so!   <<<<<\n");
    int so1, so2, so3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so3);
    fflush(stdin);
    int max = so1;
    if (so2 > max)
    {
        max = so2;
    }
    if (so3 > max)
    {
        max = so3;
    }
    printf("So lon nhat trong ba so vua nhap la: %d", max);
    fflush(stdin);
    getchar();
    return 0;
}