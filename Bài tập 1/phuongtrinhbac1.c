#include <stdio.h>

int main(void) {
  float a, b;
  printf("nhap he so bac 1 a =");
  scanf("%f", &a);
  printf("nhap he so tu do b =");
  scanf("%f", &b);
  if (a == 0){
    printf("Phuong thinh vo nghiem");
  }else
    printf("phuong trinh co 1 nghiem x = %f",-b/a);  
  return 0;
}
