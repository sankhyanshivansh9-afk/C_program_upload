#include <stdio.h>

int main() {
    int number;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the remainder of the division by 2
    remainder = number % 2;

    // Check if the remainder is zero
    if (remainder == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
