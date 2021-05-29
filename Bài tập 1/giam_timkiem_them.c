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
    void ThemPhanTu(int a[], int &n, int y, int k){
    // Mang da day, khong the them.
    if(n >= 1000){
        return;
    }
    // Neu k <= 0 thi Them vao dau
    if(k <= 0){
        k = 0;
    }
    // Neu k >= n thi Them vao cuoi
    else if(k >= n){
        k = n;
    }
    // Dich chuyen mang de tao o trong truoc khi them.
    for(int i = n; i > k; i--){
        a[i] = a[i-1];
    }
    // Chen y tai vi tri k
    a[k] = y;
    // Tang so luong phan tu sau khi chen.
    n++;
}
int main(void) {
  int n, x, k, y;
  printf("nhap phan tu n = ");
  scanf(" %d", &n);
  int a[1000];
  nhap_mang(a,n);
  xuat_mang(a,n);
  giam(a,n);
  printf("\nSau khi sap xep ");
  xuat_mang(a,n);
  printf("\nnhap so muon tim = ");
  scanf("%d", &x);
  printf("tim thay %d tai a[%d]", x ,tim_kiem(a,n,x));
  printf("\nnhap gia tri muon them : ");
  scanf("%d", &y);
  printf("\nnhap vi tri can them : ");
  scanf("%d", &k);
  ThemPhanTu(a,n,y,k);
  xuat_mang(a,n);
  return 0;
}
