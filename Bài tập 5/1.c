#include <stdio.h>

int main(void) {
int n;
//nhap n tu ban phim
printf("nhap n =");
scanf("%d", &n);
int S = 0;
//vong lap tu i den n
for(int i = 1; i <= n; i++){
  S+=i*i;
}
//hien thi ket qua ra man hinh
printf("S = 1^2 + 2^2 +...+%d^2 = %d", n, S);
  return 0;
}
