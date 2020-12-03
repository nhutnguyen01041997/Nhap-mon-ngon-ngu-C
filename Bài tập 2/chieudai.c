#include <stdio.h>

int main(void) {
  // khai bao bien va nhap du lieu tu ban phim
  double l;
  // khai bao don vi chieu dai m, cm, mm
  double m, cm, mm;
  m = 1;
  cm = 100;
  mm= 1000;
  
  printf("nhap l = ");// nhap l tu ban phim
  scanf("%lf",&l);
  printf("m\t cm\t mm\t \n ");
  printf("%lf\t %lf\t %lf\t \n", m, cm,mm);
   
  getchar();
  return 0;
}
