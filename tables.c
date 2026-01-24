/*Print the multiplication table of a number
Input: 3
Output:
python-repl
Copy code
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30
*/
#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
