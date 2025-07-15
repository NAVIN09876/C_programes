#include<stdio.h>
int main()
{
    //pomters is used to store the address of another variable
    int *ptr;// decleration
    int x;
    ptr=&x;// assigment of the address of x varible to the pointer of ptr

    printf("%d\n",*ptr);



}
