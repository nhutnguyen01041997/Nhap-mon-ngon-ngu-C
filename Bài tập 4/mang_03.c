#include <stdio.h>

int main(void) {
  //khai bao va nhap so nguyen n tu ban phim
  int n;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int a[n], sole = 0, sochan = 0 ;
  //nhap phan tu n vao mang a
  for(int i = 0; i < n; i++){
    printf("nhap phan tu so  %d :", i+1);
    scanf("%d", &a[i]);
  }
  //hiên thi mang a ra man hinh
  printf("\nmang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);
  }
  //hien thi so chan trong mang a
  printf("\nso chan mang a :");
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0 && a[i] != 0){
    printf(" %d", a[i]);
    sochan++;
    }
    }
    // hien thi so le trong mang a
    printf("\nso le mang a : ");
    for(int i = 0; i < n; i++){
      if(a[i] % 2 != 0){
      printf(" %d", a[i]);
      sole++;
      }
      }
      //dem so 0 co trong mang a
      int count = 0; 
          printf("\nso 0 trong mang = ");
    for(int i = 0; i < n; i++){
      if(a[i] == a[n]){
      count++;
      
      }
      }
      printf(" %d", count);// hien thi so luong so 0 trong mang a
      printf("\nso luong so chan trong a = %d", sochan);// hien thi so luong so chan trong mang a
      printf("\nso luong so le trong a = %d", sole);// hien thi so luong so le trong mang a
  return 0;
}
