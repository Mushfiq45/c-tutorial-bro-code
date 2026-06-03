#include<stdio.h>
#include<windows.h>

int main(){

  for (int i = 3; i >= 0; i-=1)
  {
    Sleep(1000);
    printf("%d\n",i);
  }

    printf("HAPPY NEW YEAR");
  
  return 0;
}