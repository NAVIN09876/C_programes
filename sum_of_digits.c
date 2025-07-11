/*Print the sum of digits of a number
Input: 123
Output: 6
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0;
    while(n){
        sum += n%10;//123%10=3=sum=+3
        n=n/10;//123/10=12
    }
    printf("sum of digits = %d",sum);
}