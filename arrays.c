#include<stdio.h>

int main(){

  int numbers[] = {10, 20, 30, 40, 50, 60};
  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  char name[] = "Bro Code";

  int size = sizeof(numbers) / sizeof(numbers[0]);
        //sizeof(numbers)->    total number of bytes = 24
       //sizeof(numbers[0]->   each number of byte = 4
          //printf("%d", sizeof(numbers[0]));

          for(int i = 0; i < size; i++){
            printf("%d ", numbers[i]);
          }
  return 0;
}