#include <stdio.h>

int main(void) {
  // khai bao bien
  int n;
  // nhap so nguyen n tu ban phim
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  // Tao mang a co kich thuoc = n
  int a[n];
  // vong lap nhap n phan tu a tu ban phim
  for(int i = 0; i < n; i++){
    printf("nhap phan tu cua a : ");
    scanf("%d", &a[i]);
    }
    // Vong lap hien thi cac so trong mang a
    for(int i = 0; i < n; i++){
      printf(" %d", a[i]);
    }
    // Vong lap hien thi cac so chan trong mang a
    for(int i = 0; i < n; i++){
      if(a[i] % 2 == 0){
        printf(" \n so chan trong mang %d",a[i]);
      }
    }  
    

  return 0;
}
