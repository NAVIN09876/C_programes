#include<stdio.h>
int main()
{
    int x=1;
    char *ptr=((char *)&x);
    if(*ptr)
    {
        printf("Your Machine is Little Endian Machine");
    }
    else{
        printf("Your Machine is Big Endian Machine");
    }

}