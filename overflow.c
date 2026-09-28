#include <stdio.h>
#include <limits.h> // Contains INT_MAX

int main() {
    // Declare a 32-bit signed integer and assign it the maximum possible value
    int max_value = INT_MAX; // 2147483647
    
    printf("Original value: %d\n", max_value);

    // Increment by a small value (1) to trigger overflow
    int overflow_value = max_value + 1;

    printf("Value after overflow: %d\n", overflow_value); // Wraps to -2147483648
    
    return 0;
}
