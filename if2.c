#include <stdio.h>

int main() {
    int number;

    // Ask the user to type a number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // The 'if' condition checks if the number is greater than 0
    if (number > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}
