#include <stdio.h>
#include <stdlib.h>

/* TINH TRUNG BINH TONG CAC SO CHIA HET CHO 3 TRONG MANG */

int main() {
// Nhap mang
      int i, n;
      printf("Moi nhap so gia tri muon tao: ");
      scanf("%d",&n);
      int mang[n];
      for(i=0;i<n;i++){
            printf("mang[%d] = ", i);
            scanf("%d",&mang[i]);
      }
// Tim trung binh cong
      float tong=0, trungBinh;
      int dem=0;
      for(i=0;i<n;i++){
            if(mang[i]%3==0){
                  tong+=mang[i];
                  dem++;
            }
      }
      trungBinh = tong/dem;
      printf("Trung binh tong cac so chia het cho 3 trong mang la %.2f", trungBinh);
    fflush(stdin);
    getchar();
    return 0;
}