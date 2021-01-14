#include <stdio.h>

int main(void) {
  // khai bao mang co 4 ngan
  int arr[4]={3, 5, 7,2};
  int S = 0;
  //tao vong lap hien thi cac so trong mang
  for(int i = 0; i < 4; i++){
  printf(" %d\n" , arr[i]);
  }
  // Tao vong lap hien thi tong cac so trong mang
  for(int i = 0; i < 4; i++){
    S += arr[i];
  }
  // hien thi ra man hinh ket qua
    printf("tong cua mang %d" , S);
  
  
  return 0;
}
