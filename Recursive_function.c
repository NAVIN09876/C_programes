#include<stdio.h>
int numbers(int x)
{
    if(x==10)
    {
        
        printf("%d ",x);
        return 1;
    }
    else{
        printf("%d ",x);
        return numbers(x+1);
    }


}
int main()
{
    int n=1;
    numbers(n);
}