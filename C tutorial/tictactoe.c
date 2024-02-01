#include<stdio.h>
#include<stdlib.h>

char arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
void showboard();

int main() {
    int player = 1;
    int choice, i;
    char mark; //X or O

    do {
        showboard();
        player = (player % 2) ? 1 : 2;
        printf("%d", &choice);

    }while(i == -1);

    return 0;

}

void showboard() {
    printf("TIC TAC TOE");
    printf("       |         |       \n");
    printf("       |         |       \n");
    printf("  %c     |  %c       |   %c \n", arr[1], arr[2], arr[3]);
    printf("       |         |       \n");
    printf("       |         |       \n");
    printf("  %c     |   %c      |   %c\n",  arr[4], arr[5], arr[6]);
    printf("       |         |       \n");
    printf("       |         |       \n");
}