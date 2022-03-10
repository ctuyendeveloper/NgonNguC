#include <stdio.h>

int main() 
{
    int so;
    printf("Nhap so thang: ");
    scanf("%d", &so);
    switch(so) {
    case 1:printf("31 ngay");break;
    case 2:printf("28 ngay");break;
    case 3:printf("31 ngay");break;
    case 4:printf("30 ngay");break;
    case 5:printf("31 ngay");break;
    case 6:printf("30 ngay");break;
    case 7:printf("31 ngay");break;
    case 8:printf("30 ngay");break;
    case 9:printf("31 ngay");break;
    case 10:printf("30 ngay");break;
    case 11:printf("31 ngay");break;
    case 12:printf("30 ngay");break;
    default:
    printf("So da nhap khong hop le!"); 
}
    fflush(stdin);
    getchar();
    return 0;
}
