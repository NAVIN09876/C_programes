#include<stdio.h>
int main()
{
    int x;
    printf("Enter number x value :");
    scanf("%d",&x);
    for (int i=31;i>=0;i--)
    {
        int bit = x>>i;
        if(bit & 1)
        {
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
    return 0;
}