#include <stdio.h>

int main (){
  //khai bao bien bằng kiểu int
  int a, b;
//nhap du lieu tu ban phim
  printf("nhap a tu ban phim a =");
  scanf("%d", &a);
  printf("nhap b tu ban phim b =");
  scanf("%d", &b);
// so sanh 2 so a va b	
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
