#include<stdio.h>
int main()
{
    int x,pos;
    printf("enter x value:");
    scanf("%d",&x);
    printf("Enter position:");
    scanf("%d",&pos);
    int result = (x |(1<<pos));
    printf("After set bit in a position in x vcalue = %d",result); 
}
