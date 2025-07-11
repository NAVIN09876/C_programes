/*Basic Input & Output
Print Hello World
Output: Hello, World!*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    printf("%s",str);
}