#include <stdio.h>

int main() {
  //khai bao bien
  int n,i;
  printf("Nhap n : ");
  scanf("%d", &n);
  //Tao mang a kich thuoc n
  int a[n];
  //Nhap n phan tu cua mang a tu ban phim
  for(i = 0;i < n;i++){
  	printf("Phan tu o mang a : ");
    scanf("%d", &a[i]);
  }
  //Hien thi cac phan tu cua mang a
  printf("Cac phan tu o mang a : ");
  for(i = 0;i < n;i++){
  	printf(" %d",a[i]);
  }
  //Hien thi cac so chan tu mang a
  printf("Cac so chan tu mang a : ");
  for(i = 0;i < n; i++){
    if(a[i] %2 == 0){
    printf(" %d ",a[i]);
  }
  }
  return 0;
}
