#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//prototyping

void sayHi(char name[], int age);

double cube(double num);

int maximum(int num1, int num2);


int main() {
    
  sayHi("Ele", 23);
  sayHi("Mariam", 19); 

  printf("Cube of number: %f\n", cube(2.0));

  printf("Max of 2 numbers: %d\n", maximum(899, 675));

  return 0;
    
}

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);

}

double cube(double num) {
  return num * num * num;
}

int maximum(int num1, int num2) {
  int result;
  return ( num1 > num2 ) ? num1 : num2; // ternary conditional operator
}

