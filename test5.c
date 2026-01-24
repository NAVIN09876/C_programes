#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

char ch;
scanf("%c", &ch);


char w[10];
scanf("%s",w);

char s[100];
scanf("%[^\n]%*c", s);
printf("%c\n",ch);
printf("%s\n",w);
printf("%s\n",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}