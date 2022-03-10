#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Name: ");
    puts(name); // in chuỗi
    printf("Sau khi dao nguoc   : %s", strrev(name)); // đảo ngược chuỗi
    // char ch1[10];
    // char ch2[10];
    // strcat(ch1, ch2);
    // printf("Chuoi sau khi da noi la: %s", ch1); nối chuỗi
    // strlwr(ch1, ch2); chuỗi chữ thường
    // strupr(); chuỗi chữ hoa
    // strstr(); tìm ký tự trong chuỗi
    fflush(stdin);
    getchar();
    return 0;
}