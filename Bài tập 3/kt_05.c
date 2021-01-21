#include <stdio.h>

int main(void) {
  int sc = 0, sl=0, n , i;
  printf("nhap so nguyen n :");
  scanf("%d", &n);
  int j = 0;
  for( i = 1 ; i <= n; i++){
    if(i % 2 == 0){
      sc+=i;
    }
  else{
    sl += i;
    }
    }
    printf("tong chan: %d\n", sc);
    printf("tong le : %d", sl);
  
  
  
  return 0;
}
