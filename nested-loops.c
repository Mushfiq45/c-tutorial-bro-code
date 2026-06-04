#include<stdio.h>

int main(){

for(int i=1; i <=15; i++){
  printf("\n");
  for(int j = 1; j <=10 ; j++){
    int result=i*j;
    printf("%d x %d= %d\n", j,i,result);
  }
}
  return 0;
}