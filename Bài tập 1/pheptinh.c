#include <stdio.h>

int main(void) {
	//Khai bao bien a, b
    int a, b;
    a = 3;
    b = 5;
    //khai bao bien tong, hieu, tich, thuong
    int tong , hieu, tich, thuong;
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;
    
    printf(" tong = %d\n ", tong);
    
    printf(" thuong = %d\n", hieu);
    
    printf(" tich = %d\n", tich);
    
    printf(" thuong = %d\n", thuong);
    
    
    double c = 3;
    double d = 5;
     printf("thuong = %f\n", c/d);
	
	getchar();
	return 0;
}
