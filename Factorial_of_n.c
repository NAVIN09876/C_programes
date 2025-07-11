/*Print factorial of a number

Input: 5

Output: Factorial: 120
*/#include<stdio.h>
int main()
{
    int n;
    int mul=1;
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        mul*=i;

    }
    printf("%d",mul);
}
