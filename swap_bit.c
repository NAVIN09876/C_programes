#include<stdio.h>
int main()
{
    int x,p1,p2;
    printf("Enter x value:");
    scanf("%d",&x);
    printf("Enter p1 value:");// p1 is the actual value of x
    scanf("%d",&p1);
    printf("Enter p2 value:"); //p2 is the chage bit in x
    scanf("%d",&p2);
    if(x&(1<<p1)^(x&(1<<p2)>>p2))
    {
        x=x^(1<<p1);
        x=x^(1<<p2);

    }
    printf("After swaping the bits in x value is :%d",x);

}