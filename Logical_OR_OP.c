/*Check if a character is a vowel (a, e, i, o, u)
Use || with multiple conditions.*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character :");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("character is ovwel");
    }
    else{
        printf("character is not a ovwel");
    }
}