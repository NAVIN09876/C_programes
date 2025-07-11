/*Reverse print numbers from N to 1
Input: 5
Output: 5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d",&n);

    for(int i =n;i>0;i--)
    {
        printf("%d ",i);
    }
}