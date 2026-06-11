#include<stdio.h>

int main(){

  int grades[5] = {0};

  
  for(int i = 0; i < 5; i++){
    printf("Enter your grades: ");
    scanf("%d", &grades[i]);
  }


  for(int i = 0; i < 5; i++){
    printf("%d ",grades[i]);
  }
  return 0; 
}