#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("So lon nhat trong 3 so\n");
    int a,b,c;
    printf("Nhap so dau tien: ");
    scanf("%d", &a);
    fflush(stdin);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    fflush(stdin);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    fflush(stdin);
    if(a >= b && a >= c)
    {
        printf("Lon nhat %d", a);
    }else if(b >= a && b >= c)
    {
        printf("Lon nhat %d", b);
    }else
    {
        printf("Lon nhat %d", c);
    }
    fflush(stdin);
    getchar();
    return 0;
}
