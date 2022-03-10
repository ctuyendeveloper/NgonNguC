#include<stdio.h>
#include<conio.h>
#include<string.h>
int demsotu(char *s);
void main()
{
	char s[90];
    printf("nhap chuoi ");
    gets(s);
	int kq=demsotu(s);
	printf("\nSo tu trong chuoi la: %d",kq);
	getch();
}
int demsotu(char *s)
{
	int n=strlen(s),i;
	int dem=0;
	if(s[0]!=' ')
		dem=1;
	for( i=0;i<n-1;i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			dem++;
	}
	return dem;
}
