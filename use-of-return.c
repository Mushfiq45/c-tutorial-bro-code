#include <stdio.h>
#include <stdbool.h>

double ageCheck(int age){
  if(age >= 18){
    return 1;
  }
  else{
    return 0;
}
}

  int main(){
    
    
    if (ageCheck(31)){
      printf("pass");
    }
   else {
      printf("fail");
    }

  return 0;
}