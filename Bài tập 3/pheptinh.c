#include <stdio.h>

int main (){
  //khai bao bien va gan gia tri
int a =5, b = 2;
// khai bao bien pt kieu char duoc nhap tu ban phim
char pt;
printf("nhap phep tinh =");
scanf("%c", &pt);
//su dung cau lenh switch de hien thi phep tinh +, -, *, / trong phuong trinh 
switch(pt){
  case '+':
  printf("a + b = %d", a + b);
  break;
  case '-':
  printf("a - b = %d",a - b );
  break;
  case '*':
  printf("a * b = %d", a * b);
  break;
  case '/':
  printf("a / b = %d", a / b);
    //nhac nho khi nhap sai
    default:
    printf("dau vao khong hop le, vui long nhap +, -, *, /");
  }


     

  getchar ();
  return 0;
}

