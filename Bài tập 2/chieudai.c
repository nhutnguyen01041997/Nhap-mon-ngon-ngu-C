#include <stdio.h>

int main(void) {
  // khai bao bien va nhap du lieu tu ban phim
  double l;
  
  
  // khai bao don vi chieu dai m, cm, mm
  double m, cm, mm;
  m=l*1;
  cm=l*100;
  mm=l*1000;
  
 
  
  printf("nhap l = ");// nhap l tu ban phim
  scanf("%lf",&l);
  printf("m\t cm\t mm\t  \n ");
  printf("%.lf\t %.lf\t %.lf\t \n", l*1, l*100,l*1000  );
   
  getchar();
  return 0;
}
