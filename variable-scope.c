#include<stdio.h>

int add(int a, int b){  //(ADD) IS THE GLOBAL VARIABLE HERE
  //int result= a+b;
  int x=5;  //LOCAL VARIABLE (CAN BE USED IN MANY GLOBAL VARIABLES)
  printf("%d", x);
  return a+b;  
}

int subtract(int a, int b){ //(SUBTRACT) IS THE GLOBAL VARIABLE HERE
  //int result= a-b;
  int x=7;   //LOCAL VARIABLE (X IS USED HERE AGAIN)
  printf("%d", x);
  printf ("%d",a-b);
}
               // THAT IS WHY 5 IS PRINTED BEFORE THE ADDITION
               // SO IS 7 
int main(){

  printf ("%d\n",add(2,3));
  subtract(2,3);
 
  return 0; 
}