#include<stdio.h>
#include<stdlib.h>

int main() {
    /*Add 2 numbers*/

  double number1;
  double number2;

  printf("Enter the first number: ");
  scanf("%lf", &number1);

  printf("Enter the second number: ");
  scanf("%lf", &number2);

  printf("Sum of 2 n umbers: %f", number1 + number2);
}