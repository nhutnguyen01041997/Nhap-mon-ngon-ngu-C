#include <stdio.h>



int main(void) {
  int n,m, j=0, count = 0;
// nhập số nguyên n từ bàn phím
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int a[n];
//nhâp phần tử n của mảng a từ bàn phím
  for(int i = 0; i < n; i++){
    printf("nhap phan tu  a[%d] : ", i);
    scanf("%d", &a[i]);
  }
  // hiển thị mảng a
  printf("\nmang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);  
  }
  printf("\nnhap so nguyen m :");
  scanf("%d", &m);
  //kiểm tra m có tồn tại trong mang a hay không
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
 //đếm số lượng m trong mảng a
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
 
 // hiển thi chỉ số phần tử của m trong mang a
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
