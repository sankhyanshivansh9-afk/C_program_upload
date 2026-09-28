#include <stdio.h>
#include <string.h>

int main() {
    char role[20];
    float basic_salary = 0.0, da = 0.0, ta = 0.0, hra = 0.0, total_salary = 0.0;

    // Prompt user for employee role
    printf("Enter employee role (manager/supervisor): ");
    scanf("%19s", role);

    // Determine salary components based on the role
    if (strcmp(role, "manager") == 0 || strcmp(role, "Manager") == 0) {
        basic_salary = 4000.0;
        da = 0.04 * basic_salary;   // 4% of Basic Salary
        ta = 0.03 * basic_salary;   // 3% of Basic Salary
        hra = 0.01 * basic_salary;  // 1% of Basic Salary
    } 
    else if (strcmp(role, "supervisor") == 0 || strcmp(role, "Supervisor") == 0) {
        basic_salary = 3000.0;
        da = 0.03 * basic_salary;   // 3% of Basic Salary
        ta = 0.03 * basic_salary;   // 3% of Basic Salary
        hra = 0.01 * basic_salary;  // 1% of Basic Salary
    } 
    else {
        printf("Invalid employee role entered.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate total salary using the requested formula: Bs + DA + TA - HRA
    total_salary = basic_salary + da + ta - hra;

    // Display the breakdown and final salary
    printf("\n--- Salary Breakdown ---\n");
    printf("Basic Salary: $%.2f\n", basic_salary);
    printf("DA:           $%.2f\n", da);
    printf("TA:           $%.2f\n", ta);
    printf("HRA:          $%.2f\n", hra);
    printf("------------------------\n");
    printf("Total Salary: $%.2f\n", total_salary);

    return 0;
}
