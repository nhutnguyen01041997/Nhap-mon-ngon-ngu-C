không dùng vòng lặp
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



Vòng lặp for
  #include <stdio.h>

int main(void) {
  
  int n;
  int S = 0;
  int i;
  printf("nhap so nguyen n =");
  scanf("%d", &n);
  for( ; n > 0; i++){
  i = n % 10;//n chia cho 10 lấy số dư (VD:123/10=12.3(dư 3)
  S += i; 
  n /= 10;

  printf("%d\n", S);
  }
  return 0;
}

Vòng lặp while
#include <stdio.h>

int main(void) {
  
  int n;
  int S = 0;
  int i;
  printf("nhap so nguyen n =");
  scanf("%d", &n);
  while(n != 0){
  i = n % 10;
  S += i;
  n /= 10;
  
  printf("%d\n", S);
  }
  return 0;
}
