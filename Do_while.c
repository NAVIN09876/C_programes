#include<stdio.h>
int main()
{
    int i=0;
    int n;
    printf("Enter a number it will print upto the number :");
    scanf("%d",&n);
    do {
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
}