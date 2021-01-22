// khoi khai bao
#include <stdio.h>
//Khai báo biến toàn cục
int x = 1, y = 2; 

void ham_a(int x);
void ham_b();

// khoi ham main
int main(void) {
  int x = 3;
  printf(" %d", x);//kết quả 3 , do khai báo biến x trong main là 3
  printf(" %d", y);// kết qua 2
  ham_a(x);
  ham_b();
  return 0;
}
// khối định nghĩa hàm
// trả về giá trị hàm a
void ham_a(int x){
  x = 5;
  printf(" %d", x);//kết quả 5, do khai bao bien x trong main là 5
}
//trả về giá trị hàm b
void ham_b(){
   printf(" %d", y);//kết qua 2
}
