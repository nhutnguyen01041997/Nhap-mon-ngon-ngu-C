#include <stdio.h>

int main (){
  //khai bao bien bằng kiểu int
  int a, b;
  printf("nhap a tu ban phim a =");//hiên thi ra man hinh a
  scanf("%d", &a);
  printf("nhap b tu ban phim b =");// hien thi ra man hinh b
  scanf("%d", &b);
  if(a > b){
    printf("a > b"  );
   }
  else if(a == b){
    printf("a = b");
   }else{
    printf("a < b"); 
    }
	getchar();
  return 0;
}
