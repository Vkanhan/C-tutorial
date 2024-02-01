#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char grade = 'F';

    switch(grade) {
    case 'A':
        printf("You did a great job!");
        break;
    case 'B':
        printf("You did good!");
        break;
    case 'C':
        printf("You did okay");
        break;
    case 'D':
        printf("You did poorly");
        break;
    case 'F':
        printf("You failed bitch!");
        break;
    default:
        printf("Invalid");

    }
    








    return 0;

}