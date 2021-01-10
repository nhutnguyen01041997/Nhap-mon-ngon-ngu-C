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
 vòng lặp for TAM GIÁC CÂN ĐẦY
   #include<stdio.h>

int main()
{
    int h;
    //khai bao bien n và hien thi tu ban phim
    printf("Nhap n:");
    scanf("%d", &h);
    //kiem tra dieu kien cua n va in ra tam giac so
    for(int i = 1; i <= h; i++){
       for(int j = 1; j <= h - i; j++)
          printf(" ");
       for(int x = 1; x <= 2 * i - 1; x++)//2 * i - 1 (2 vs 1 là số cố định, i là số hàng )
          printf(" *");
        printf("\n");
       
    }
       
    return 0;
}

VÒNG LẶP FOR TAM GIÁC CÂN RỖNG

#include<stdio.h>


int main()
{
	int h;
	printf("Nhap chieu cao tam giac h=");
	scanf("%d",&h);
	for (int i=h;i>0;i--)
	{
		for (int j=1;j<i;j++)
			printf(" ");
		for (int k=1;k<=(2*(h-i)+1);k++)
			if ((k==1)||(k==(2*(h-i)+1))||(i==1)) // dòng này
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

    
    return 0;
}
