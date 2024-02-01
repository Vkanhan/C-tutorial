#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Dereferencing a pointer in programming means 
//accessing the value that is stored at the 
//memory address held by the pointer

int main() {
    int age = 30;
    int *pAge = &age;

    printf("%d\n", *pAge);

    printf("%d", *&*&age);
}