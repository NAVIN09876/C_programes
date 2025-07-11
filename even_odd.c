/*Print even numbers between 1 and N
Input: 10
Output: 2 4 6 8 10
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i&1)//(i&1)?odd:even
        {
            printf("Odd :%d\n",i);
        }
        else{
            printf("Even :%d\n",i);

        }
        
    }



}