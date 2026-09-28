#include <stdio.h>
int main()
{
    int x, y;
    x=5;
    y=10;
    printf("The value is%d %d %d", x,x++,++x);
    printf("\nThe value is%d %d %d", y,++y,y++);
    return 0;
}