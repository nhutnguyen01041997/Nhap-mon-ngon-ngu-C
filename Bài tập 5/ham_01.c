// khoi khai bao
#include <stdio.h>
int sum(int a, int b, int c);





//khoi ham main
int main() {
  int x= 1, y= 2, z= 3;
  int tong = sum(x,y,z);
  printf("tong = %d", tong);
  return 0;
}
// khoi dinh nghia ham
int sum(int a, int b, int c){
int d = a+ b +c;
  return d;
}
