#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    //reading files
    char line[255];

    FILE *fpointer = fopen("employee.txt", "r");

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
}