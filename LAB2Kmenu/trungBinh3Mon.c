#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
    Bài 4:
    * Khai báo biến Điểm toán, Điểm lý, Điểm hóa và Điểm Trung bình 3 môn
    * Nhập Điểm toán, Điểm lý, Điếm hóa
    * Tính toán
    * Xuất ra kết quả Điểm Trung Bình 3 Môn
    */
   float diemtoan, diemly, diemhoa, diemtrungbinh;
    printf("Diem Toan: ");
    scanf("%f", &diemtoan);
    printf("Diem Ly: ");
    scanf("%f", &diemly);
    printf("Diem Hoa: ");
    scanf("%f", &diemhoa);
    diemtrungbinh = (diemtoan*3 + diemly*2 + diemhoa) / 6;
    printf("Diem Trung Binh 3 Mon: %.3f", diemtrungbinh);
    fflush(stdin);
    getchar(); 
    return 0;
}