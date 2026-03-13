#include<stdio.h>
#include<string.h>
int ispalindrome(char *str)
{
    char *start=str; 
    char *end = str;

    while (*end){
        end++;
    }
    end--;

    while (start < end)
    {
        if(*start!=*end)
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1;

}
char *strrev(char *start)
{
  
    char *end = start;

    while (*end){
        end++;
    }
    end--;

    while (start < end)
    {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
    }

    return start;
}
//Copy one string to another without strcpy()
char* str_copy(char *dest,const char* str)
{
     char *temp =dest;
    while(*str)
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest ='\0';
    return temp;
} 
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
//Count vowels, consonants, digits, and spaces
int count_ascil(char*str)
{
    int vowels=0;
    int consonants=0;
    int digits=0;
    int space=0;
    while(*str!='\0')
    {
        if(*str == 'a'||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u'||*str == 'A'||*str == 'E'||*str == 'I'||*str == 'O'||*str == 'U')
        {
            vowels++;
        }
        else if(*str>='a' && *str<='z'||*str>='A' && *str<='Z')
        {
            consonants++;
        }
        else if(*str>='0' && *str<='9')
        {
            digits++;
        }
         else if(*str ==' ')
        {
            space++;
        }
        else{
            printf("invalid input\n");
        }
        str++;
    }
    printf("vowels = %d\nconsonants = %d\ndigits = %d\nspace = %d\n",vowels,consonants,digits,space);
}
//delete duplicate elements
char* delete_duplicates(char* str)
{

    char *temp = str;
    char *p, *q, *r;
    for (p = str; *p != '\0'; p++) {
        for (q = p + 1; *q != '\0'; q++) {
            if (*p == *q) {
                for (r = q; *r != '\0'; r++) {
                    *r = *(r + 1);
                }
                q--;
            }
        }
    }
    return str;
}
// string covert into upper
char* str_upper(char* str)
{
    char *temp =str;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str -= 32; 
        }
        str ++;
    }
    return temp;
}
char* str_lower(char* str)
{
    char *temp =str;
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str -= 32; 
        }
        str ++;
    }
    return temp;
}
//word count
int word_count(char* str)
{
    int count=0;
    char *p = str;
    while(*p !='\0')
    {
       if ((*p != ' ') && (p == str || *(p - 1) == ' '))
        {
            count++;
        }
        p++;
    }
    return count;

}


int main()
{
    char arr[] ="naveen";
    strrev(arr);
    printf("string reverse = %s\n",arr);
    char arr3[]="AMMA";
    int palindrome = ispalindrome(arr3);
    if(palindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    char arr1[20];
    str_copy(arr1,arr);
    printf("string copy = %s\n",arr1);
    int cmp =str_cmp(arr,arr1);
    if(cmp)
    {
        printf("Equla\n");
    }
    else
    {
        printf("not equal\n");
    }

    count_ascil(arr);


    delete_duplicates(arr);
    printf("%s\n",arr);
    str_upper(arr);
    printf("%s\n",arr);
    char arr4[] = "hi iam naveen kumar yadava i have 3 years of experieance";
    int words =word_count(arr4);
    printf("number of words = %d\n",words);
    return 0;
}
