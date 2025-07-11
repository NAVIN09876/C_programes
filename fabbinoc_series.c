/*Print Fibonacci series up to N terms
Input: 6
Output: 0 1 1 2 3 5
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int p1=0,p2=1,p3;
    int i=0;
    
    while(i<=n)
    {  
        printf("%d ",p1);
        p3=p1+p2;
        p1=p2;
        p2=p3;
        i++;
    }
}