/*Level 3: for Loop Practice
Print numbers from 1 to N
Input: 5
Output: 1 2 3 4 5
Print the sum of numbers from 1 to N
Input: 10
Output: Sum = 55
*/
#include<stdio.h>
int main()
{
    int n;
    int sum;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i;

    }
    printf("%d",sum);
}