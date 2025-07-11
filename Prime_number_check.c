/*Slightly Advanced for Loop
Check if a number is prime*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("Prime Number");
    }
    else{
        printf("Not a Prime Number");
    }
}