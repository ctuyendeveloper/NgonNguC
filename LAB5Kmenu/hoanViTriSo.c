#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Nhap so a = ");
    scanf("%d", &a);
    printf("Nhap so b = ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("Sau khi hoan vi :");
    printf("\nSo a = %d", a);
    printf("\nSo b = %d", b);
    fflush(stdin);
    getchar();
    return 0;
}