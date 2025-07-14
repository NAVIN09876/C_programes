/*call by value*/
#include<stdio.h>
int modify(int x);
int main()
{
    int x=10;
    modify(x);
    printf("x value: %d",x);
}
int modify(int x)
{
    x=15;
    printf("x value in function :%d\n",x);

}