#include<stdio.h>


int main (){
//khai báo biến
int n, S = 0;
// nhập n từ bàn phím
printf("nhap n =");
scanf("%d", &n);
//Tổng S
for(int i = 1; i <= n; i++){
S += i;
}
printf("S = 1 + 2 +...+ %d = %d",n,S);

  return 0;
  }
