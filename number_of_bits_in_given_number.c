#include<stdio.h>
int main()
{
    int x,count;
    printf("Enter x value: ");
    scanf("%d",&x);
    while(x)
    {
        count++;
        x=x&(x-1);
    }
    int off_count=8*sizeof(int)-count;
    printf("Bits:%d\n",count);
    printf("offcount:%d",off_count);

}