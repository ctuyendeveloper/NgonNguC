#include <stdio.h>
#include <string.h>
char s[5][20];
void veChuongTrinh()
{
    printf("\n +-----------------------------------------+");
    printf("\n + Chuong trinh sap xep chuoi theo chu cai +");
    printf("\n +-----------------------------------------+\n\n");
}
void veSapXepKemXuat()
{
    printf("\n\n +---------------------------------+");
    printf("\n + Da sap xep xong! Xuat chuoi moi +");
    printf("\n +---------------------------------+\n");
}
void veXuat()
{
    printf("\n +------------+");
    printf("\n + Xuat chuoi +");
    printf("\n +------------+\n");
}
void nhap()
{
    int a = 1;
    for (int i = 0; i < 5; i++)
    {
        printf(" Chuoi %d: ", a);
        scanf("%s", s[i]);
        a++;
    }
}
void xuat()
{
    int a = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("\n Chuoi %d: ", a);
        printf(" %s", s[i]);
        a++;
    }
}
void sapXep()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (strcmp(s[j - 1], s[j]) > 0)
            {
                char tam[20];
                strcpy(tam, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], tam);
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    veChuongTrinh();
    nhap();
    veXuat();
    xuat();
    veSapXepKemXuat();
    sapXep();
    xuat();
    fflush(stdin);
    getchar();
    return 0;
}