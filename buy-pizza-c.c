#include <stdio.h>

int main () {
  
char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;
    char currency ='$';

    printf("What item would u like to buy?: ");
    fgets(item, sizeof(item), stdin);
    printf("What is the price for each?: ");
    scanf("%f", &price);
    printf("How many would you like?: ");
    scanf(" %d", &quantity);

    printf("\nYou have ordered %d %s\n", quantity, item);

    total = price * quantity;
    printf("Total= %c%.2f", currency, total);

    return 0;
}


