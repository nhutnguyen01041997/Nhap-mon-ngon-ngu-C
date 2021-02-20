#include <stdio.h>

int main(void) {
  int n;
  printf(" nhap n =");
  scanf("%d",&n);
  int t=1;
  int S = 0;
  //vòng lặp i
  for(int i = 1;i<=n;i++){
  t = t *i;// tính giai thừa
  S = S + t;// tổng các giai thừa từ 1 đế n
  }
  // hiển thị tổng ra màn hình
  printf("S = 1!+2!+...+%d! =%d", n,S);
  
return 0;
}
