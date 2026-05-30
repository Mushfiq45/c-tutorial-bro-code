#include <stdio.h>

int main() {
    
    int choice=0;
    float Celcius=0;
    float Fahrenheit=0;
    float temp=0;
    
    printf("Temperature Converter\n");
    printf("1. Celcius to Fahrenheit\n");
    printf("2. Fahrenheit to Celcius\n");
    printf("Choose 1 or 2\n");
    scanf("%d", &choice);
    
    if(choice==1){
        printf("Enter temperature in Celcius: ");
        scanf("%f", &temp);
        temp= (temp / 5 * 9) + 32;
        printf("temp = %.2f °F\n", temp);
       
    }
    
    else if(choice == 2){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp= (temp-32) / 9 *5;
        printf("temp = %.2f °C\n", temp);
      
    }
    
    else{
        printf("Cant you read bro? choose 1 or 2");
    }

    return 0;
}