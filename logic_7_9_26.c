#include<stdio.h>
int main (void)
{
    int sum = x+y;
    x=5;y=6;
    printf("Enter two integers numbers");
    scanf("%d %d",&x,&y);
    sum=x+y;
    printf("The sum is %d",sum);
    return 0;
}