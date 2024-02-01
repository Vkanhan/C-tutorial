#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // While loop
    int index = 1;
    while(index <= 5) {
        printf("%d\n", index);
        index++;
    }

    int i = 6;
    do {
        printf("%d\n", i);
        i++;
    } while(i <= 10);

    return 0;
}