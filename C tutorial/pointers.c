#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    //Pointers are just data types which are memmory address in RAM
    int age = 30;
    // creating pointer variable and 
    //stores the memmory address of another known variable in the programme
    int *pAge = &age;

    double gpa = 3.5;
    double *pGpa = &gpa;

    char grade = 'A';
    char *pGrade = &grade;  


    printf("Memmory address of age: %p", &age);
    printf("Memmory address of gpa: %p", &gpa);
    printf("Memmory address of grade: %p", &grade);




}