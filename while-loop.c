#include<stdio.h>
#include<stdbool.h>

int main(){
  
  bool isRunning = true;
  char response = '\0';

  while (isRunning){
    printf("You are playing the game\n");
    printf("Would you like to continue? (Y=Yes, N=No): ");
    scanf(" %c", &response);

    if (response != 'Y' && response != 'y'){
      isRunning=false;
    }

   
  }
    printf("\nYou exit the game\n"); 

  return 0;
}