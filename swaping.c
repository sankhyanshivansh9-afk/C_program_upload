#include <stdio.h>
int main() 
{
int x,y,temp=0;
 printf("enter the value of x and y");
 scanf("%d%d",&x,&y);
 //OPTION 1: swapping using third variable
 printf("before swapping x=%d y=%d\n",x,y);
 temp=x;
 x=y;
 y=temp;
 printf("after swapping x=%d y=%d\n",x,y);
    return 0 ;
}