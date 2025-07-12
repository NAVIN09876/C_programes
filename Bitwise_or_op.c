#include<stdio.h>
int main()
{
/*============
    x | y | |
    1 | 1 | 1
    0 | 1 | 1
    1 | 0 | 1
    0 | 0 | 0
=================*/
int x,y,z=0;
printf("Enter x :");
scanf("%d",&x);
printf("Enter y :");
scanf("%d",&y);
z=x|y;
printf("X|Y =%d",z);
return 0;
}