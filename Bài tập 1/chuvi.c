#include <stdio.h>

 
#define PI 3.14
int main(){
	//khai bao bien va gan gia tri kieu double
	double R=2.5; //ban kinh 
  
	double CV,DT; //khai bao Chu vi va Dien Tich 
  CV= 2*R*PI;
  DT= R*R*PI;
    
	printf("CV\t DT\t \n");
	printf("%.2f\t %.2f\t \n", CV, DT);
	
	
	getchar();
	return 0;
}
