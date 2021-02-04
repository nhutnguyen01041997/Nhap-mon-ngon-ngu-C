#include <stdio.h>


//khoi ham main
int main(void) {
  int n;
  printf("nhap n can kiem tra =");
  scanf("%d", &n);

int S = 0;
for(int i = 1; i < n; i++){
  if(n % i == 0)
  S+=i;
  }
  if(S == n){
  printf("%d la so hoan hao",n);
  }else
  printf(" %d khong la so hoan hao", n);
        
    return 0;
}
