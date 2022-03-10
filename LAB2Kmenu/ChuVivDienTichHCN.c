#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
    Bài 2:
    * Khai báo biến chiều dài, chiều rộng, chuvihcn và dientichhcn
    * Nhập Chiều dài và chiều rộng
    * Tính toán
    * Xuất ra kết quả Chu vi và Diện tích của hình chữ nhật
    */
    int chieudai, chieurong, chuvihcn, dientichhcn;
    printf("Chieu Dai: ");
    scanf("%d", &chieudai);
    printf("Chieu Rong: ");
    scanf("%d", &chieurong);
    chuvihcn = (chieudai + chieurong) * 2;
    dientichhcn = chieudai * chieurong;
    printf("Ket Qua Chu Vi: %d \t Ket Qua Dien Tich: %d", chuvihcn, dientichhcn);
    fflush(stdin);
    getchar();
    return 0;
}