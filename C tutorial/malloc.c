#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Memmory allocation with malloc in C
int main() {
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n*(sizeof(int)));

    if(ptr == NULL){
        printf("Memmory not available");
        exit(1);
    }

    for(i = 0; i < n; i++){
        printf("Enter the number: ");
        scanf("%d", ptr + 1);
    }
    for (i = 0; i < n; i++){
        printf("%d", *(ptr + 1));
    return 0;
    }

}