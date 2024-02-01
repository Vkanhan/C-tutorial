#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    int luckyNumber[] = {4, 6, 8, 2, 5};

    int i;
    for (i = 0; i < sizeof(luckyNumber)/sizeof(luckyNumber[0]); i++) {
        printf("%d \n", luckyNumber[i]);
    }

    return 0;

}