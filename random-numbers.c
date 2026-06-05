#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  srand(time(0));
  int min= 50;
  int max=100;

  int randomNum1 = rand() % min + (max-min+1);
  int randomNum2 = rand() % min + (max-min+1);
  int randomNum3 = rand() % min + (max-min+1);
  printf("%d %d %d", randomNum1,randomNum2,randomNum3);

  return 0;
}