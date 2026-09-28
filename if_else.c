#include <stdio.h>

int main() {
    int number;

    // 1. Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // 2. Check the condition using if-else
    if (number > 0) {
        printf("The number is POSITIVE.\n");
    } 
    else if (number < 0) {
        printf("The number is NEGATIVE.\n");
    } 
    else {
        printf("The number is ZERO.\n");
    }

    return 0;
}
