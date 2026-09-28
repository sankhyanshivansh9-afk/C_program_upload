#include <stdio.h>
int main()
{
    float pMO, mNO,total;
    printf("Enter the marks obtained in Physics and maths");
    scanf("%f %f", &pMO, &mNO);
    total = ((pMO * (30.0 / 100.0)) + ((mNO * 70.0 / 100.0)));
    printf("The total marks obtained is: %f", total);
    return 0;
}