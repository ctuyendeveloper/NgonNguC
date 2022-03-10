#include <stdio.h>
/*
1. Không có kết quả trả về: void kèm không có return
2. Có kết quả trả về: int, float, char,...! kèm có return
3. Không có tham số: trong ngoặc của hàm sẽ để trống
4. Có tham số: trong ngoặc của hàm sẽ cần phải khai báo(có bao nhiêu số khai báo bấy nhiêu), kèm bên dưới main phải ghi luôn số
*/
// Không có kết quả trả về, không có tham số!
void xinChao()
{
    printf("Xin chao buoi chieu!\n");
}
// Không có kết quả trả về, Có tham số!
void tinhTong(int so1, int so2)
{
    int tong = so1 + so2;
    printf("Ket qua phep cong: %d", tong);
}
// Có kết quả trả về, không Có tham số!
float tinhChia()
{
    float number1 = 5;
    float number2 = 3;
    float kq = number1 / number2;
    return kq;
}
// Có kết quả trả về, Có tham số!
int tinhNhan(int number1)
{
    int kq = number1 * 5;
    return kq;
}
int main(int argc, char const *argv[])
{
    /* Không có kết quả trả về, không có tham số!*/ xinChao();
    /* Không có kết quả trả về, Có tham số!*/ tinhTong(4, 5); // Mỗi số trong ngoặc tượng trưng cho so1 và so2 trên code số 8
    /* Có kết quả trả về, không Có tham số!*/ float ketQuaPhepChia = tinhChia();
    printf("\nKet qua phep chia: %f", ketQuaPhepChia); // Khai báo thêm 1 lần rồi in ra màn hình nếu dùng kiểu này
    /* Có kết quả trả về, Có tham số!*/ int ketQuaPhepNhan = tinhNhan(5);
    printf("\nKet qua phep nhan: %d", ketQuaPhepNhan); // Như trên nhưng có chứa tham số
    printf("\nKet thuc");
    fflush(stdin);
    getchar();
    return 0;
}