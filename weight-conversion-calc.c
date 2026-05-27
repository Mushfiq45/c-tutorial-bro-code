#include <stdio.h>

int main() {
    
    int choice=0;
    float pounds=0;
    float kgs=0;
    float weight=0;
    
    printf("Weight Converter Calc\n");
    printf("1. Kgs to Pounds\n");
    printf("2. Pounds to Kgs\n");
    printf("Choose 1 or 2\n");
    scanf("%d", &choice);
    
    if(choice==1){
        printf("Enter weight in kgs: ");
        scanf("%f", &weight);
        weight= weight * 2.204;
        printf("Weight = %.2f lbs\n", weight);
         if(weight>=165.347){
            printf("Lose some weight fat motherfucker...");
        }
        else{
            printf("You good broo");
        }
       
    }
    
    else if(choice == 2){
        printf("Enter weight in lbs: ");
        scanf("%f", &weight);
        weight= weight / 2.204;
        printf("Weight = %.2f kgs\n", weight);
         if(weight>=75){
            printf("Lose some weight fat motherfucker...");
        }
        else{
            printf("You good broo");
        }
    }
    
    else{
        printf("Cant you read bro? choose 1 or 2");
    }

    return 0;
}