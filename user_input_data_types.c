#include<stdio.h>
int main()
{
    int Number;
    float float_number;
    char character;
    char string[10];
    double double_datatype;

//scan for all datatypes
    printf("Integer input :");
    scanf("%d",&Number);
    printf("Float input :");
    scanf("%f",&float_number);
    printf("Character input :");
    scanf(" %c",&character);
    printf("string input :");
    scanf("%s",&string);
    printf("Double input :");
    scanf("%lf",&double_datatype);
    printf("integer:%d\n Float:%f\n Character:%c\nString:%s\nDouble:%lf",Number,float_number,character,string,double_datatype);





}