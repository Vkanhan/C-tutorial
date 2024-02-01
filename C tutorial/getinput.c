#include<stdio.h>
#include<stdlib.h>

int main() {
    /*Get input from the user*/
    char yourName[20];
    int yourAge;

    printf("Enter your name: \n");
    /*fgets is used for storing the string after the string*/
    fgets(yourName, 20, stdin); 

    printf("Enter your age: ");
    scanf("%d", &yourAge);
    
    printf("Your name is: %s", yourName);
    printf("You are %d years old\n", yourAge);

    
}