#include <stdio.h>



int main(void) {
  int n,m;

  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int a[n];

  for(int i = 0; i < n; i++){
    printf("nhap phan tu  a[%d] : ", i);
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
 int  j=0;
for(int i=0;i<n;i++){
  if(m==a[i]){
    j+=1;
    break;
}
}
 if(j>0){
 printf("\nco ton tai");
}
 else
 printf("\nkhong ton tai");
 for(int i = 0; i < n; i++){
 if(a[i] == m){
 j+=1;
 }
 }
 if(j>0){
 printf("\nchỉ so của phan tu %d:",m);
  }
else{
  printf("");
}

    for(int i = 0;i < n; i++){
      if(a[i] == m){
      printf(" %d", i);
      j+=1;
      }
      }
      if(j>0){
      printf("\nso luong m = %d", count);
      }
      else{
      printf("");
      }
  return 0;
}
