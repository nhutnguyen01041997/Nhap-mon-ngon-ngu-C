#include <stdio.h>

int main(void) {
  int n, m;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  
  int a[n];
  //nhap phan tu n cua mang a tu ban phim
  for(int i = 0; i < n; i++){
    printf("nhap phan tu so %d :", i+1);
    scanf("%d", &a[i]);
  }
  // hien thi cac phan tu cua mang a
  printf("\nmang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);
    }
  // nhap so nguyen m tu ban phim
    printf("\nnhap so nguyen m :");
    scanf("%d", &m);
  //kiem tra phan tu m co ton tai trong mang a hay khong neu 
  int j;
  for(int i = 0; i < n; i++ ){
    if(a[i] == m){
      j+=1;
      }
    }
  if(j>0){
    printf("\nco ton tại");
    }
  else
    printf("\nKhong ton tai")
  
  

  return 0;
}
