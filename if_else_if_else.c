#include <stdio.h>

int main() {
    int number;

    // 1. Ask the user to type a number
    printf("Enter any whole number: ");
    
    // 2. Read and store the number in the variable
    scanf("%d", &number);

    // 3. Check the conditions
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
