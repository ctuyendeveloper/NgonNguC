#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
    Bài 1:
    * Khai báo biến 2 số là number1 và number2
    * Nhập 2 số
    * Tính toán
    * Xuất ra Kết quả tổng và hiệu của 2 số.
    */
    int number1, number2, tong, hieu;
    printf("So thu nhat: ");
    scanf("%d", &number1);
    printf("So thu hai: ");
    scanf("%d", &number2);
    tong = number1 + number2;
    hieu = number1 - number2;
    printf("Ket Qua Tong: %d \t Ket Qua Hieu: %d", tong, hieu);
    fflush(stdin);
    getchar();
    return 0;
}
