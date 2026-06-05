#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  srand(3);

  int x=rand();
  int y=rand();
  int z=rand();
  printf("%d %d %d", x, y, z); 

  return 0;
}