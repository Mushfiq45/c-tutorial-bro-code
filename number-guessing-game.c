#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

  srand(time(0));
  int min = 1;
  int max = 10;
  int input = 0;
  int tries = 0;
  bool isRunning = true;

  int randomNum = rand() % max+1;

printf("Guess between 1 to 10: ");
  

  while (isRunning){
  
    scanf("%d",&input);
  
  if (randomNum==input)
  {
    printf("guessed it right ");
    isRunning = false;
  }
  
  else{
    

    if (input > randomNum)
    {
      printf("Wrong answer.You guessed too high\n");
    }
    

    else{
      printf("Wrong answer.You guessed too low\n");
    }
    printf("Guess again: ");
    tries++;
  }
  
  }
  printf("\nThe number is %d\n", randomNum);
  printf("It took you %d tries", tries);
  return 0;
}