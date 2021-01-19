#include <stdio.h>

int main(void) {
  //khai bao va nhap so nguyen n tu ban phim
  int n;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int a[n], S = 0;
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
  // tinh tong trong mang a
  printf("\ntong mang a =");
  for(int i = 0; i < n; i++){
    S+=a[i];
    }
    // hien thi tong trong mang
    printf("%d", S);
  return 0;
}
