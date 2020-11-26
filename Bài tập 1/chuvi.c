#include <stdio.h>

 

int main(){
	//khai bao bien va gan gia tri kieu double
	double R=2.5;
  double PI=3.14;
	double CV,DT;
  CV= 2*R*PI;
  DT= R*R*PI;
    
	printf("CV\t DT\t \n");
	printf("%.2f\t %.2f\t \n", CV, DT);
	
	
	getchar();
	return 0;
}
