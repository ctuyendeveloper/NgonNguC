#include <stdio.h>
int main(int argc, char const *argv[])
{
    float soDien, soTien;
    const float bac1 = 1.678;
    const float bac2 = 1.734;
    const float bac3 = 2.014;
    const float bac4 = 2.536;
    const float bac5 = 2.834;
    const float bac6 = 2.927;
    printf("Nhap so dien: ");
    scanf("%f", &soDien);
if (soDien <= 50 && soDien >= 1)
{
    soTien = soDien * bac1;
    printf("So dien ban da su dung nam trong khoang [1,50] kWh \nSo tien can phai tra la: %.3f", soTien);
}
else if (soDien <= 100 && soDien >= 51)
{
    soTien = 50 * bac1 + (soDien - 50) * bac2;
    printf("So dien ban da su dung nam trong khoang [51,100] kWh \nSo tien can phai tra la: %.3f", soTien);
}
else if (soDien <= 200 && soDien >= 101)
{
    soTien = 50 * bac1 + 50 * bac2 + (soDien - 100) * bac3;
    printf("So dien ban da su dung nam trong khoang [101,200] kWh \nSo tien can phai tra la: %.3f", soTien);
}
else if (soDien <= 300 && soDien >= 201)
{
    soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + (soDien - 200) * bac4;
    printf("So dien ban da su dung nam trong khoang [201,300] kWh \nSo tien can phai tra la: %.3f", soTien);
}
else if (soDien <= 400 && soDien >= 301)
{
    soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + (soDien - 300) * bac5;
    printf("So dien ban da su dung nam trong khoang [301,400] kWh \nSo tien can phai tra la: %.3f", soTien);
}
else if (soDien >= 401)
{
    soTien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + (soDien - 400) * bac6;
    printf("So dien ban da su dung hon 400 kWh \nSo tien can phai tra la: %.3f", soTien);
}
else
{
    printf("So dien ban nhap khong duoc bang 0 hoac la nho hon 0! Xin hay khoi dong lai chuong trinh.");
}
fflush(stdin);
getchar();
return(0);
}


