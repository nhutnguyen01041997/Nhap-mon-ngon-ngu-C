#include <stdio.h>

 
#define PI 3.14
int main(){
	//khai bao bien va gan gia tri kieu double
	float Chu_vi,Dien_tich,R; //ban kinh 
  //nhap R tu ban phim
  printf("nha ban kinh R = ");
  scanf("%f", &R);
  //lap cong thuc
  Chu_vi= 2*R*PI;
  Dien_tich= R*R*PI;
   //hien thi ket qua ra man hinh 
	printf("Chu vi hinh tron = %.2f\n",Chu_vi);
	printf("Dien tich hinh tron = %.2f", Dien_tich);
	
	
	getchar();
	return 0;
}
