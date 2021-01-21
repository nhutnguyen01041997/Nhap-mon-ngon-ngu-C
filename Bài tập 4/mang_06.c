#include <stdio.h>



int main(void) {
  int n,m, j=0, count = 0;
// nhap so nguyen n tu ban phim
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int a[n];
//nhap phan tu n cua mang a tu ban phim
  for(int i = 0; i < n; i++){
    printf("nhap phan tu  a[%d] : ", i);
    scanf("%d", &a[i]);
  }
  // hien thi mang a
  printf("\nmang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);  
  }
  //nhap so nguyen m tu ban phim
  printf("\nnhap so nguyen m :");
  scanf("%d", &m);
  //kiem tra m có ton tai trong mang a hay khong
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
 //dem so luong m trong mang a
 for(int i = 0; i < n; i++){
    if(a[i] == m){
      count++;
      j+=1;
    }
    }
     if(j>0){
      printf("\nso luong m = %d", count);
      }
      else{
      printf("");
      }
 
 // hien thi chi so phan tu cua m trong mang a
 if(j>0){
 printf("\nchỉ so của phan tu %d:",m);
  }
else{
  printf("");
}
    for(int i = 0;i < n; i++){
      if(a[i] == m){
      printf(" %d", i);
      }
      }
      
  return 0;
}
