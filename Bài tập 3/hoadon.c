#include <stdio.h>

int main (){
	//khai bao bien
  double dongia,soluong,thanhtien ;
  printf ("nhap dongia  =");// nhap gia tri tu ban phim
  scanf("%lf",&dongia);
  printf ("Nhap soluong = ");// nhap gia tri tu ban phim
  scanf ("%lf",&soluong);
  //tinh gia tri thanhtien 
  if (soluong <5){
  thanhtien = dongia * soluong;
  printf("thanhtien \n");
  printf("%.1f",thanhtien);
  }else if (soluong>=5){
  thanhtien = dongia*soluong*0.75;// giam gia 25% neu mua so luong tu 5 tro len
  printf("thanhtien \n");
  printf ("%.1f",thanhtien );
  }
  getchar ();
  return 0;
}

