#include <stdio.h>

int main(void) {
  
  int n;
  int S = 0;
  int i;
  printf("nhap so nguyen n =");
  scanf("%d", &n);

  i = n % 10;
  S += i;
  n /= 10;
  
  i = n % 10;
  S += i;
  n /= 10;

   i = n % 10;
  S += i;
  n /= 10;
   

  printf("%d", S);
  return 0;
}
