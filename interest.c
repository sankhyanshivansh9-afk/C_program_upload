#include <stdio.h>
#include <math.h>

int main() {
    // Variable declarations
    double p, r, t;
    double simpleInterest, compoundInterest;

    // Prompt user and take inputs
    printf("Enter principal, rate, and time: ");
    if (scanf("%lf %lf %lf", &p, &r, &t) != 3) {
        printf("Invalid input. Please enter numbers only.\n");
        return 1;
    }

    // Calculate simple interest
    simpleInterest = (p * r * t) / 100.0;

    // Calculate compound interest
    compoundInterest = p * pow(1.0 + (r / 100.0), t) - p;

    // Output results formatted to 2 decimal places
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
