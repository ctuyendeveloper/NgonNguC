#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[100];
    printf("Xin moi nhap vao chuoi: ");
    gets(s);
    fflush(stdin);
    int i = 0, nguyenAm = 0, phuAm = 0;
    while (s[i++] != '\0')
    {
        if ((s[i] == 'a') || (s[i] == 'i') || (s[i] == 'e') || (s[i] == 'u') || (s[i] == 'o'))
        {
            nguyenAm++;
        }
    }
    printf("Chuoi '%s' co chua: %d nguyen am", s, nguyenAm);
    fflush(stdin);
    getchar();
    return 0;
}