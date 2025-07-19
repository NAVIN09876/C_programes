#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str); // Read string until newline
    printf("You entered: %s\n", str);
    
    return 0;
}