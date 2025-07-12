#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x value :");
    scanf("%d",&x);
    printf("Enter y value :");
    scanf("%d",&y);
    printf("x value:%d\n",x);
    printf("y value:%d\n",y);
    printf("After Swaping\n");
    x=x^y; y=x^y;x=x^y;
    printf("x value:%d\n",x);
    printf("y value:%d\n",y);




}