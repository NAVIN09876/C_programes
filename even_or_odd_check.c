/*Simple Conditions (if/else)
Check if a number is even or odd
Input: 7
Output: Odd
*/
#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number%2==0) // if(number & 1){even}else{odd}
    {
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}