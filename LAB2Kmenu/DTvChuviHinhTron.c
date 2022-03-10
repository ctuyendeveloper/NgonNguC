#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
    Bài 3:
    * Khai báo biến PI
    * Khai báo biến Bán kính, Chu vi Hình tròn và Diện tích hình tròn
    * Nhập Bán kính
    * Tính toán
    * Xuất ra kết quả Chu vi và Diện tích của hình tròn
    */
    const float PI = 3.14;
    float bankinh, chuvihinhtron, dientichhinhtron;
    printf("Ban Kinh: ");
    scanf("%f", &bankinh);
    chuvihinhtron = bankinh * 2 * PI;
    dientichhinhtron = PI * bankinh * bankinh;
    printf("Ket Qua Chu Vi Hinh Tron: %f \t Ket Qua Dien Tich Hinh Tron: %f", chuvihinhtron, dientichhinhtron);
    fflush(stdin);
    getchar();
    return 0;
}