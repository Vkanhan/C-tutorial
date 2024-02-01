
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double num1;
    double num2;
    char op;

    printf("Enter num1: ");
    scanf("%lf", &num1);

    printf("operator: ");
    scanf(" %c", &op); // space left before '_'%c

    printf("Enter num2: ");
    scanf("%lf", &num2);

    if (op == '+') {
        printf("%f", num1 + num2);
    } else if (op == '-') {
        printf("%f", num1 - num2);
    } else if (op == '/') {
        printf("%f", num1 / num2);
    } else if (op == '*') {
        printf("%f", num1 * num2);
    } else {
        printf("Invalid operator");
    }
    
    return 0;
}