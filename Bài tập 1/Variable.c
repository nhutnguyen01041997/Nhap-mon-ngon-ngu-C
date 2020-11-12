#include <stdio.h>

int main() {
// khai bao bien a kieu so nguyen
int a;
// khoi tao gia tri bien a
a = 4;
// khai bao va khoi tao bien b
int b = 2;
// khai bao nhieu bien va khoi tao
int c = 1, d = 3;
// khai bao nhieu bien
int e, f, g;
printf("Bien a = %d va bien b = %d",a,b);
e = a + b;
// khai bao bien f va khoi tao
f = ((a +b) - c) * d;
printf("\n");
printf("Tong a + b = %d",e);
printf("\n");
printf("Tong %d + %d = %d",a,b,e);
printf("\n");
printf("Tong((a + b) - c) * d = f",f);
printf("\n");
printf("Tong((%d + %d) - %d) * %d = %d",a,b,c,d,f);
getchar();
return 0;
}
