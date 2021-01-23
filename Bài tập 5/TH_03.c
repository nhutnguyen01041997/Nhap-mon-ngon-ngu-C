//khoi khai bao
#include<stdio.h>
int a, b, c;
int so_lon_nhat();
//khoi ham main
int main (){
  //khai báo biến
  
  // nhập a, b, c từ bàn phím
  printf("nhap a =");
  scanf("%d", &a);
  printf("nhap b =");
  scanf("%d", &b);
  printf("nhap c =");
  scanf("%d", &c);
  so_lon_nhat();
  return 0;
  }
  //khoi dinh nghia ham
  int so_lon_nhat(){
  if(a>b && a>c){
  printf("a lon nhat");
} else if( b>a && b>c){
  printf("b lon nhat");
  }else{
  printf("c lon nhat");
}

  return 0;
 } 
