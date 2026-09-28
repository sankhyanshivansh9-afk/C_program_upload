#include <stdio.h>

int main() {
    int role;
    double basicSalary, da, ta, hra, totalSalary;

    printf("Enter 1 for Manager and 2 for Supervisor: ");
    scanf("%d", &role);

    switch (role) {
        case 1:
            basicSalary = 40000;
            da = basicSalary * 0.04;
            ta = basicSalary * 0.03;
            hra = basicSalary * 0.01;
            totalSalary = basicSalary + da + ta + hra;
            printf("Manager salary = %.2f\n", totalSalary);
            break;
            
        case 2:
            basicSalary = 30000;
            da = basicSalary * 0.03;
            ta = basicSalary * 0.03;
            hra = basicSalary * 0.01;
            totalSalary = basicSalary + da + ta + hra;
            printf("Supervisor salary = %.2f\n", totalSalary);
            break; // Fixed: Moved inside the case block

        default:
            printf("Invalid role.\n");
    } // Fixed: Properly closed the switch statement block

    return 0;
}
