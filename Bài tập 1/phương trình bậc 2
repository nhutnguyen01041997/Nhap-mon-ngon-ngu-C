#include <stdio.h>
#include <math.h>

int main(void) {
// khai bao bien
float a, b, c;
// nhap a, b, c tu ban phim
printf("nhap he so bac 2, a =");
scanf("%f", &a);
printf("nhap he so bac 1, b =");
scanf("%f", &b);
printf("nhap he so tu do c =");
scanf("%f", &c);
//kiem tra cac he so
if (a == 0){
  if (b == 0){
    printf("phuong trinh vo nghiem");
    }else{
      printf("phuong trinh co mot nghiem x = %f", (-c / b));
    }
    }
    
    
    //tinh delta
    float delta = b*b - 4*a*c, x1, x2;

    //tinh nghiem
    if(delta > 0){
      x1 = (float) ((-b + sqrt(delta)) / (2*a));
      x2 = (float) ((-b - sqrt(delta)) / (2*a));
      printf("phuong trinh co 2 nghiem  la : x1 = %f va x2 = %f", x1, x2);
      }else if (delta == 0){
        x1 = (-b / (2*a));
        printf("phuong trinh co nghiem kep x1 = x2 = %f", x1);
      }else {
        printf("phuong trinh vo nghiem");
      }
       

  return 0;
}
