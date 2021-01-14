#include <stdio.h>

int main(void) {
  int arr[4];
  int S = 0;
  for(int i = 0; i < 4; i++){
    printf("nhap mang array :");
    scanf("%d", &arr[i]);
    S += arr[i];
    }
    printf("%d" , S);
    

  return 0;
}
