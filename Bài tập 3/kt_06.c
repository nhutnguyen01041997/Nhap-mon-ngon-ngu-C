#include<stdio.h>

int main(){
int h ;
printf("nhap chieu cao h =");
scanf("%d", &h);
switch(h){
  case 1:
  printf(" * \n");
  break;
  case 2:
  printf("   *     \n");
  printf(" * * * \n");
  break;
  case 3:
  printf("    *     \n");
  printf("  * * * \n");
  printf(" * * * * * \n");
  break;
  case 4:
  printf("      *     \n");
  printf("    * * * \n");
  printf("   * * * * * \n");
  printf(" * * * * * * * \n");
  break; 
  default:
  printf("sorry , no more");
}
return 0;
}
