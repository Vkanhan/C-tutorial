#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Memory address
int main() {
    int age = 30;
    double gpa = 3.5;
    char grade = 'A';

    printf("Memory address of age: %p\n", &age);
    printf("Memory address of gpa: %p\n", &gpa);
    printf("Memory address of grade: %p\n", &grade);
}