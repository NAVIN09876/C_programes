/*Check if a number is between 10 and 20
Use && to check range: n >= 10 && n <= 20
*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter number ;");
    scanf("%d",&age);
    if (age>=1 && age<=18)
    {
        printf("Age is in between  1 and 18 your are a  child");
    }
    else if (age>=18 && age<=28)
    {
        printf("Age is in between  10 and 20 your are a adult");
    }
    else if(age>=29 && age<=50)
    {
        printf("Age is in between  29 and 50 your are a Middle age");

    }
    else{
        printf("Age is in between  60 and 100 your are a old age");
    }
}