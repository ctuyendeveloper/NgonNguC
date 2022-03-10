#include <stdio.h>
int main(int argc, char const *argv[])
{
   int i;
   printf("So nhap: ");
   scanf("%d", &i);
   if (i % 2 == 0) {
      printf("%d la so chan\n", i);
   } else {
      printf("%d la so le\n", i);
   }
   fflush(stdin);
   getchar();
   return 0;
}