#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int getUserChoice();
int getComputerChoice();
void gameLogic(int userChoice, int computerChoice);

int main(){ 

bool isRunning = 1;
char response = '\0';

while (isRunning)
{
 
  printf("*** ROCK PAPER SCISSORS ***\n"); 

  int userChoice = getUserChoice();
  int computerChoice = getComputerChoice();

  switch (userChoice)
  {
  case 1:
    printf("You chose ROCK\n");
    break;
  case 2:
    printf("You chose PAPERS\n");
    break;  
  case 3:
    printf("You chose SCISSORS\n");
    break;
  }
  switch (computerChoice)
  {
  case 1:
    printf("Computer chose ROCK\n");
    break;
  case 2:
    printf("Computer chose PAPERS\n");
    break;  
  case 3:
    printf("Computer chose SCISSORS\n");
    break;
  }

  gameLogic(userChoice, computerChoice);

  printf("\n\nWould you like to continue? Y = YES, N = NO: ");
  scanf(" %c", &response);

   if (response != 'Y' && response != 'y'){
      isRunning=false;
    }
}
    printf("You exit the game");

  return 0;
}

int getUserChoice(){
    int userChoice = 0;
    do
    {
      printf("Choose an option\n");
      printf("1.ROCK\n");
      printf("2.PAPERS\n");
      printf("3.SCISSORS\n");
      printf("Enter your choice: ");
      scanf("%d", &userChoice);
    } while (userChoice < 1 || userChoice  > 3);
    
}

int getComputerChoice(){
    srand(time(0));

    int randomNum = (rand() % 3) +1;
    return randomNum;
}

void gameLogic(int userChoice, int computerChoice){
    if (userChoice == computerChoice)
    {
      printf("It's a TIE!!!");
    }
    else if (userChoice == 1 && computerChoice == 3)
    {
      printf("You WIN!!!");
    }
    else if (userChoice == 2 && computerChoice == 1)
    {
      printf("You WIN!!!");
    }
    else if (userChoice == 3 && computerChoice == 2)
    {
      printf("You WIN!!!");
    }
    else{
      printf("You LOSE!!! :( ");
    }
    
}