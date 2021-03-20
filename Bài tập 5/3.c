//khoi khai bao
#include <stdio.h>
int UCLN(int a, int b);
int BCNN(int a, int b);
//khoi ham main
int main(void) {
int a, b;
  //nhap a, b tu ban phim
printf("nhap a = ");
scanf("%d", &a);
printf("nhap b = ");
scanf("%d", &b);

//hien thi ket qua
BCNN(a,b);
printf("\nBCNN la : %d", BCNN(a,b));
  return 0;
}
//khoi dinh nghia ham
//tim UCLN
int UCLN(int a, int b){
  if(b == 0){
  return a;
  }else
  return UCLN(b,a%b);
}
//tim BCNN
int BCNN(int a, int b){
  return a*b/UCLN(a,b);
}
