//Khoi khai bao
#include<stdio.h>
int n , i, tong = 0, sochan = 0, sole = 0;// biến toàn cục (sử dụng cho toàn chương trình)

void Nhap_pt_mang(int a[]);
void Hien_thi_pt_mang(int a[]);
void Hien_thi_tong_chan(int a[]); 
void Dem_chan_le_0(int a[i]);
 //khoi ham main
int main(){
  
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}

// khoi dinh nghia ham
void Nhap_pt_mang(int a[]){
  
  for( i = 0; i < n; i++){
  printf("nhap pt thu %d :", i);
  scanf("%d", &a[i]);
  }
  }
void Hien_thi_pt_mang(int a[]){
  printf("mang a :");
  for( i = 0; i < n; i++){
    printf(" %d", a[i]);
  } 
  }
void Hien_thi_tong_chan(int a[]){
    for( i = 0; i < n; i++){
    if(a[i] % 2 == 0){
      tong += a[i];
}
}

printf("\ntong chan = %d", tong);

 } 
 void Dem_chan_le_0(int a[]){
 //hien thi so chan trong mang a
  printf("\nso chan mang a :");
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0 && a[i] != 0){
    printf(" %d", a[i]);
    sochan++;
    }
    }
    // hien thi so le trong mang a
    printf("\nso le mang a : ");
    for(int i = 0; i < n; i++){
      if(a[i] % 2 != 0){
      printf(" %d", a[i]);
      sole++;
      }
      }
      //dem so 0 co trong mang a
      int count = 0; 
          printf("\nso 0 trong mang = ");
    for(int i = 0; i < n; i++){
      if(a[i] == a[n]){
      count++;
      
      }
      }
      printf(" %d", count);// hien thi so luong so 0 trong mang a
      printf("\nso luong so chan trong a = %d", sochan);// hien thi so luong so chan trong mang a
      printf("\nso luong so le trong a = %d", sole);// hien thi so luong so le trong mang a
      }
