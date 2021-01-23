//khoi khai bao
#include<stdio.h>
float a, b, c;
float so_lon_nhat();
//khoi ham main
int main (){
  //khai báo biến
  
  // nhập a, b, c từ bàn phím
  printf("nhap a =");
  scanf("%f", &a);
  printf("nhap b =");
  scanf("%f", &b);
  printf("nhap c =");
  scanf("%f", &c);
  so_lon_nhat();
  return 0;
  }
  //khoi dinh nghia ham
  float so_lon_nhat(){
  if(a>b && a>c){// dieu kien tra ve a lon nhat
  printf("%.f lon nhat",a);
} else if( b>a && b>c){//dieu kien tra ve b lon nhat
  printf("%0.2f lon nhat",b);
  }else{// dieu kien tra ve c lon nhat
  printf("%0.2f lon nhat",c);
}

  return 0;
 } 
