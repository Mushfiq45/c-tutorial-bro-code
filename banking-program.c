#include<stdio.h>

float checkBalance(float userBalance);
float deposit(float userBalance);
float withdraw(float userBalance);

int main(){

  int userOption = 0;
  float userBalance = 0.0f; 
  //float depositAmount = 0;

  printf("***THE BIG BANK***");

  do
  {
    printf("\nChoose an option: \n");
    printf("\n1. CHECK BALANCE: \n");
    printf("2. DEPOSIT: \n");
    printf("3. WITHDRAW: \n");
    printf("4. EXIT \n");
    printf("\nEnter an option: ");
    scanf("%d", &userOption);

      if (userOption > 4 || userOption < 1)
  {
    printf("Please select an option between (1-4)");
  }
  
    if (userOption==1)
    {
      checkBalance(userBalance);
    }

    else if (userOption==2)
    {
      userBalance = deposit(userBalance);
    }

    else if (userOption==3)
    {
      userBalance = withdraw(userBalance);
      
    }
    
  } while (userOption != 4);
  printf("You exit the bank");
  return 0;
}

float checkBalance(float userBalance){
  printf("Your Balance is = $%.2f", userBalance);
}

float deposit(float userBalance){
  float depositAmount = 0;
  printf("How much do you want to deposit: $");
  scanf("%f", &depositAmount);

  if (depositAmount < 0)
  {
    printf("\nInsufficient Amount.");
  }
  else{
  userBalance = userBalance + depositAmount;
  printf("Successfully deposited $%.2f", depositAmount);
  return userBalance;
  }
}

float withdraw(float userBalance){
  float withdrawAmount; 
  printf("How much do you want to withdraw: $");
  scanf("%f", &withdrawAmount);
if (withdrawAmount > userBalance || withdrawAmount < 0)
{
  printf("\nInsufficient Amount.");
}
else{
   userBalance = userBalance - withdrawAmount;
  printf("Successfully withdrawed $%.2f", withdrawAmount);
  return userBalance;
}
 
}