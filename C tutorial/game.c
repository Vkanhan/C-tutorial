#include <stdio.h>
#include <stdlib.h>

int main() {

    int secretNumber = 5;
    int guessNumber;
    int guessLimit = 3;
    int guessCount = 0;
    int outOfGuesses = 0;

    while (guessNumber != secretNumber && outOfGuesses == 0) {
        if (guessLimit > guessCount) {
            printf("Enter your guess: ");
            scanf("%d", &guessNumber);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1) {
        printf("You are out of guesses");
    } else {
        printf("You won!");
    }
}