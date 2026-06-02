#include<stdio.h>

void hello(char name[], int age);  //FUNCTION PROTOTYPE DECLARED (TO ORGRANIZE THE CODE)

int main(){

    hello("Ilman", 71);

  return 0;
}

  void hello(char name[], int age){  //INT MAIN ER BAIRE
  printf("You are %s\n",name);
  printf("Your age is %d", age);
}