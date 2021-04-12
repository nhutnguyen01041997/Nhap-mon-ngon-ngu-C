#include <stdio.h>
void nhap_phan_tu_cua_a(int n,int a[]){
for(int i = 0; i < n; i++){
  printf(" phan phan tu cua a %d =", i);
  scanf("%d", &a[i]);
}
}
int max(int n,int a[]){
  int max =a[0];
  for(int i = 1; i < n; i++){
    if(max < a[i])
      max = a[i];
    }
    return max ;
  }
int min(int n, int a[]){
  int min = a[0];
  for(int i = 1; i < n; i++){
    if(min > a[i])
      min = a[i];
  }
  return min;
}  


int main(void) {
  int n;
  
  printf("nha n =");
  scanf("%d", &n);
int a[n];
nhap_phan_tu_cua_a(n,a);
printf("max = %d \n", max(n,a));
printf("min = %d", min(n,a));
  return 0;
}
