/*Find the length of a string without using strlen()

Reverse a string without using library functions

Check whether a string is a palindrome

Copy one string to another without strcpy()

Compare two strings without strcmp()

Count vowels, consonants, digits, and spaces

Convert string to uppercase / lowercase

Count words in a string

Remove spaces from a string
*/
#include<stdio.h>
#include<string.h>
//Find the length of a string without using strlen()

#define size(x)((char*)(&x+1)-(char*)(&x))
char *strrev(char *str)
{
    char *start = str;
    char *end = ;
    char temp;

    while (*end){
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    return str;
}

//Check whether a string is a palindrome
int size_of_string(char arr[])
{
    int count=0;
    while(arr[count]!='\0')
    {
        count ++;
    }
    return count;
}
//Copy one string to another without strcpy()
char* str_copy(,char *dest,const char* str)
{
    char *temp =dest;
    while(*str)
    {
        *dest = *str;
        str++;
        dest++
    }
    *dest ='\0';
    return temp;

} 
//Compare two strings without strcmp()
int str_cmp(const char *str1,const char*str2)
{
    while(*str1 && *str2)
    {
        if(*str1 != *str2)
        {
            return 0;
        }
        str1++;
        str2++;
    }
    return 1;
}
int main()
{
    char arr[]={"naveen"};
    int s = size(arr)/size(arr[0]);
    printf("size of string = %d\n",s-1);
    printf("lengthe of string = %d\n",size_of_string(arr));
    strrev(arr);
    printf(" string reverse = %s\n",arr);

    char arr1[100];
    str_copy(arr1,arr);
    printf("%s",arr1); 
}