
#include <stdio.h>

int main(){
  int n , S = 1;

  printf(" nhap n = ");
  scanf("%d", &n);
  // vong lap S
for(int i = 1; i <= n; i++){
  S = S*i;
  }
  // dieu kien tinh giai thua
  if(n == 1){
    printf("S = %d = %d", n,S );
  }else
  printf("S =1 * 2 *...* %d = %d", n,S);  
  return 0;
  }
  
  cách 2
  //khoi khai bao
#include <stdio.h>
int S(int n);

//khoi ham main
int main(){
  int n ;

  printf(" nhap n = ");
  scanf("%d", &n);
  printf("S = 1 * 2*...*%d = %d", n, S(n));
  return 0;
  }
  //khoi dinh nghia ham
  int S(int n){
    if(n == 1)
    return 1;
    else
    return n * S(n-1);
    }
