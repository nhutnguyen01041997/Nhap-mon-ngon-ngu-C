#include<stdio.h>

int main()
{
    int n;
    //khai bao bien n và hien thi tu ban phim
    printf("Nhap n:");
    scanf("%d", &n);
    //kiem tra dieu kien cua n va in ra tam giac so
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= n; j++)
          printf(" ");
       for(int x = 1; x <= i; x++)
          printf("%d", x);
        printf("\n");
       
    }
       
    return 0;
}
