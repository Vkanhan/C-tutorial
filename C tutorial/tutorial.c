#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    printf("Hello C!\n");

    /*Math in C*/
    printf("Cube of 2 is: %f\n", pow(2,3));
    printf("Square root of 36 is: %f\n", sqrt(36));
    printf("Round the number up: %f\n", ceil(45.6788) );
    printf("Round the number down: %f\n", floor(45.992323));

    /*Constants in C*/
    const int num = 3;
    printf("%d\n", num);
    printf("Hello C!\n");

    /*Array in C*/
    int luckyNumber[] = {8, 3, 4, 6, 7};
    luckyNumber[0] = 2;
    printf("%d",luckyNumber[0]);












    
}
