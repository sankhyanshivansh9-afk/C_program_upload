#include<stdio.h>
int main() 
{
    float basic_salary, da, ta, hra, total_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    ta=0.03*basic_salary;
    da=0.04*basic_salary;
    hra=0.01400*basic_salary;
    total_salary=basic_salary+da+ta-hra;
    printf("Total salary is: %.2f\n", total_salary);
    return 0;
}