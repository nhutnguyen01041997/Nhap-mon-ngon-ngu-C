#include <stdio.h>

int main(void) {
  int n,m;

  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int a[n];

  for(int i = 0; i < n; i++){
    printf("\nnhap phan tu  a[%d] : ", i);
    scanf("%d", &a[i]);
  }
  printf("\nmang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);  
  }
  printf("\nnhap so nguyen m :");
  scanf("%d", &m);
  int count = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == m){
      count++;
    }
    }
    printf("\nchỉ so cac phan tu");
    for(int i = 0;i < n; i++){
      if(a[i] == m)
      printf(" %d", i);
      }
    int t=0;
    for(int i=0;i<n;i++){
      if(m==a[i]){
        t+=1;
        break;
        }
        if(t>0){
          printf("\nco ton tai");break;
          }
          else{
            printf("\nkhong ton tai");break;
            }
      }

    printf("\nso luong m = %d", count);  




  return 0;
}
