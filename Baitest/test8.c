#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*    int i=1;
for (int i = 0; i<10; i++)
{
printf("7 * %d = %d \n",i,i *7);
}
*/
    // int number;
    // printf("Nhap vao 1 so: ");
    // scanf("%d", &number);
    // fflush(stdin);
    // int result = 1;
    // for (int i = 1; i <= number; i++)
    // {
    //     result = result * i;
    // }
    // printf("Ket qua: %d", result);

    // int number;
    // fflush(stdin);
    // for (int i = 0; i <= 20; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d\n", i);
    //     }
    // }
    
    int tong = 0;
    int dem = 0;
    for (int i = 0; i <= 50; i++)
    {
        if (i % 3 == 0)
    {
        tong = tong + i;
        dem++;
    }
    }
      printf("Ket qua: %f", (float) tong / dem);


    // continue: bỏ qua vòng lặp hiện tại và chạy vòng mới
    // break: thoát khỏi vòng lặp

    // xác định 1 số nguyên tố
    int number;
    printf("Nhap so: ");
    scanf("%d", &number);
    fflush(stdin);
    int dem = 0;
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            dem++;
            break;
        }
    }
    if (dem != 0)
    {
        printf("Day khong la so nguyen to");
    } else {
        printf("Day la so nguyen to");
    }
    
    getchar();
    return 0;
}