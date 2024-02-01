#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Madlibs game*/

int main() {
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter the color: ");
    scanf("%s", color);

    printf("Enter the noun: ");
    scanf("%s", pluralNoun);

    printf("Enter the celebrity name: ");
    scanf("%s %s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

}