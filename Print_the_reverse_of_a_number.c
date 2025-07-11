/*Print the reverse of a number
input=123
out put=321*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int digit=0;
    int rev=0;
    while(n){
        digit = n%10;
        rev = rev * 10 + digit;
        n=n/10;
    }
    printf("Reverse of digits = %d",rev);
}