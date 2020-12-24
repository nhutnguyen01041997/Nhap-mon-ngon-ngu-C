#include<stdio.h>

int main()
{
    int n;
    int S = 0;
    printf("Nhap n:");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++){
       S = S + i;
    }
    switch(n){
    case 1:
    printf("S = 1 = %d", S);
    break;
    case 2:
    printf("S = 1 + 2 = %d", S);
    break;
    case 3:
    printf("S = 1 + 2 + 3 = %d", S);
    break;            
    case 4:
    printf("S = 1 + 2 + 3 + 4 = %d", S);
    break;
    default :
    printf(" S = 1 + 2 +...+%d = %d",n,S);
    }
    return 0;
}
