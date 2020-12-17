int main (){
	//khai bao bien
  double dongia,soluong,thanhtien ;
  printf ("nhap dongia  =");// nhap gia tri tu ban phim
  scanf("%lf",&dongia);
  printf ("Nhap soluong = ");// nhap gia tri tu ban phim
  scanf ("%lf",&soluong);
  //tinh gia tri thanhtien 
  if (soluong < 5 && dongia < 500){
  thanhtien = dongia * soluong;
  printf("thanhtien \n");
  printf("%.1f",thanhtien);
  }else if (soluong>= 5 && dongia >= 500){
  thanhtien = dongia*soluong*0.5;// giam gia 50% neu mua so luong tu 5 và có giá từ 500 tro len
  printf("thanhtien \n");
  printf ("%.1f",thanhtien );
  }
  getchar ();
  return 0;
}


