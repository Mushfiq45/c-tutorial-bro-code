#include<stdio.h>
#include<math.h>

int main () {

float radius,area,circumference,volume;
    const double pi = 3.1416;

    printf("Enter the radius = ");
    scanf("%f", &radius);

    area= pi * pow(radius, 2);
    printf("Area = %.2f\n", area);

    circumference= 4*pi*pow(radius, 2);
    printf("Circumference = %.2f\n", circumference);

    volume= (4 / 3)*pi*pow(radius, 3);
    printf("Volume = %.2f", volume);

  return 0;
}