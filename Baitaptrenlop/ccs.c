#include <stdio.h>

int main() 
{
    int so,so2;
    char pheptinh;
    printf("Nhap so: ");
    scanf("%d", &so);
    printf("Nhap so: ");
    scanf("%d", &so2);
    printf("Nhap phep tinh: ");
    scanf("%c", &pheptinh);
    switch(pheptinh) {
    case '+':printf("Ket qua: %d", so + so2);break;
    case '-':printf("Ket qua: %d", so - so2);break;
    case '*':printf("Ket qua: %d", so * so2);break;
    case '/':printf("Ket qua: %d", so / so2);break;
}
    fflush(stdin);
    getchar();
    return 0;
}