#include <stdio.h>

int main(void) {
  // khai bao bien Van(V) , Toan(T) va nhap du lieu tu ban phim
  double V,T;
  //khai bao bien Diem Trung Binh(DTB)
  double DTB;
  DTB=(V+T)/2;
  printf("Nhap Diem Van V = ");//nhap tu ban phim
  scanf("%lf",&V);
  printf("Nhap Diem Toan T = ");//nhap tu ban phim
  scanf("%lf",&T);
  //Hien thi tieu de
  printf("Diem Van(V)\t Diem Toan(T)\t Diem Trung Binh(DTB)\t \n");
  //Hien thi ket qua
  printf("%.2f\t         %.2f\t          %.2f\t \n",V, T, (V+T)/2);

  getchar();
  return 0;
}
