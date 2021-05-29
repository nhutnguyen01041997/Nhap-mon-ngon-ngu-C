#include <stdio.h>
void nhap_mang(int a[], int n){

  for(int i = 0; i < n;i++){
    printf("phan tu a[%d] = ",i);
    scanf("%d", &a[i]);
  }
  }
void xuat_mang(int a[], int n){
  printf("mang a :");
  for(int i = 0; i < n; i++){
    printf(" %d", a[i]);
  }
  }
void giam(int a[], int n){
  int t =0;
 for(int i = 0 ; i < n - 1;i++){
   for(int j = i+1; j<n;j++){
     if(a[i] < a[j]){
       t = a[i];
       a[i] = a[j];
       a[j] = t;
  }  
  }
  }
  }
int tim_kiem (int a[], int n, int x){
  for(int i = 0; i<n; i++){
     if(x == a[i]){
     return i;
     }
  }
 return -1;
  }
    
int main(void) {
  int n, x;
  printf("nhap phan tu n = ");
  scanf(" %d", &n);
  int a[n];
  nhap_mang(a,n);
  xuat_mang(a,n);
  giam(a,n);
  printf("\nSau khi sap xep ");
  xuat_mang(a,n);
  printf("\nnhap so muon tim = ");
  scanf("%d", &x);
  printf("tim thay %d tai a[%d]", x ,tim_kiem(a,n,x));

  return 0;
}
