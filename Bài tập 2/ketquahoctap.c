#include <stdio.h>

int main(void) {
  // khai bao bien Van(V) , Toan(T) va nhap du lieu tu ban phim
  double V,T;
  //khai bao bien Diem Trung Binh(DTB)
  double DTB;
  DTB=(V+T)/2;
  printf("Nhap Diem Van V = ");
  scanf("%lf",&V);
  printf("Nhap Diem Toan T = ");
  scanf("%lf",&T);
  printf("Diem Van(V)\t Diem Toan(T)\t Diem Trung Binh(DTB)\t \n");
  printf("%.2f\t         %.2f\t          %.2f\t \n",V, T, (V+T)/2);

  getchar();
  return 0;
}
