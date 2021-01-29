#include <stdio.h>


int main(void) {
// khai bao va nhap n tu ban phim
int n;
printf(" nhap so nguyen n = ");
scanf("%d", &n);
int S = 0;
//vong lap i den n
for(int i = 1; i <= n; i++){
  S+=i;
  }
  // hien thi tong 
  printf("S=1+2+...+%d = %d", n, S);
  return 0;
}
