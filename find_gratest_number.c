/*Find the greatest of two numbers
Input: 4 8
Output: 8
*/
# include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){printf("%d",a);}else{printf("%d",b);} //or int highest nuimber = (a>b)?a:b;
    return 0;
}
