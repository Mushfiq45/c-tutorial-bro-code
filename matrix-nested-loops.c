#include<stdio.h>

int main(){

  int rows, columns;
  char symbol;

  printf("Enter the # of rows: ");
  scanf("%d", &rows);

  printf("Enter the # of columns: ");
  scanf("%d", &columns);

  printf("Enter a symbol to use: ");
  scanf(" %c", &symbol);

  for(int i=1; i<=rows; i++){
    printf("\n");
    for(int j=1; j<=columns; j++){
      
    printf("%c", symbol);
    }
  }
}