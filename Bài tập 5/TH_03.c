//khoi khai bao
#include<stdio.h>
int a, b, c;
int so_lon_nhat();
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
  int so_lon_nhat(){
  if(a>b && a>c){// dieu kien tra ve a lon nhat
  printf("a lon nhat");
} else if( b>a && b>c){//dieu kien tra ve b lon nhat
  printf("b lon nhat");
  }else{// dieu kien tra ve c lon nhat
  printf("c lon nhat");
}

  return 0;
 } 
