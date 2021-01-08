cách 1
#include<stdio.h>

int main(void){
  for(int i = 1; i <= 4; i++){
    if(i % 2 != 0 ){
      printf(" %d", i);
    }
  }
  for(int i = 6; i <= 10; i++){
    if(i % 2 != 0){
      printf(" %d", i);
    }
  }
  for(int i = 12; i <= 20; i++ ){
    if(i % 2 != 0){
      printf(" %d", i);
    }
  }  
  return 0;
}  

vòng lặp for cách 2
  
#include<stdio.h>

int main(void){

  for(int i = 1; i <= 20; i+=2){
    if((i == 5) || ( i == 11) ||( i == 15)) 
      continue;
     
      
      printf(" %d", i);
    
    }
  return 0;
}  
