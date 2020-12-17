#include <stdio.h>

int main (){
// khai bao bien thang kieu char duoc nhap tu ban phim
int thang;
printf("nhap phep tinh =");
scanf("%d", &thang);
//su dung cau lenh switch de hien thi thang
switch(thang){
  case 1:
  printf("31 ngay");
  break;
  case 2:
  printf("28 ngay");
  break;
  case 3:
  printf("31 ngay");
  break;
  case 4:
  printf("30 ngay");
  

  
  
    default:
    printf("dau vao khong hop le, vui long nhap +, -, *, /");
  }


     

  getchar ();
  return 0;
}
