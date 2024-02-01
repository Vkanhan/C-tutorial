#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    //creating a pointer to the physical file on the computer
    //fpointer is storing the memmory address of employee.txt
    FILE *fpointer = fopen("employee.txt", "w");

    fprintf(fpointer,"Mary, Accounting\nPam, Sales\nJoy, Administration");

    fclose(fpointer);
    return 0;

}