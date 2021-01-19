#include <stdio.h>

int main(void) {
  int n;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int a[n], sole = 0, sochan = 0 ;

  for(int i = 0; i < n; i++){
    printf("nhap phan tu cua %d :", i+1);
    scanf("%d", &a[i]);
  }
  printf("\nmang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);
  }
  printf("\nso chan mang a :");
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0 && a[i] != 0){
    printf(" %d", a[i]);
    sochan++;
    }
    }
    printf("\nso le mang a : ");
    for(int i = 0; i < n; i++){
      if(a[i] % 2 != 0){
      printf(" %d", a[i]);
      sole++;
      }
      }
      int count = 0; 
          printf("\nso 0 trong mang = ");
    for(int i = 0; i < n; i++){
      if(a[i] == a[n]){
      count++;
      
      }
      }
      printf(" %d", count);
      printf("\nso luong so chan trong a = %d", sochan);
      printf("\nso luong so le trong a = %d", sole);
  return 0;
}
