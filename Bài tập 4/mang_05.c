#include <stdio.h>

int main(void) {
  int n, m;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  
  int a[n];
  for(int i = 0; i < n; i++){
    printf("nhap phan tu so %d :", i+1);
    scanf("%d", &a[i]);
  }
  printf("\nmang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);
    }
    printf("\nnhap so nguyen m :");
    scanf("%d", &m);
  for(int i = 0; i < n; i++ ){
    if(a[i] == m)
    printf("\nco ton tại");
    
  if(a[i]!=m)
  printf("\nkhong ton tai");
  

  return 0;
}
