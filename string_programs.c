#include<stdio.h>
int str_len(char *str)
{
    int len=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            len++;
            i++;
        }
        
    }
    return len;
}
char* str_cpy(char *dst,char *src)
{

    int i=0;
    char *s=dst;
    while(src[i]!='\0')
    {
        dst[i]=src[i];
        i++;
    }
    dst[i]='\0';
    return s;
}
char* str_cat(char *dst,char *src)
{
    char *s=dst;
    int i=0;
    int j=0;
   
    while(dst[i]!='\0')
    {
        i++;
    }
    while(src[j]!='\0')
    {
        dst[i]=src[j];
        i++;
        j++;
    }
    dst[i]='\0';
}
void str_cmp(char *dst,char *src)
{
    int flag =1;
    int i=0;
    while(dst[i]!='\0')
    {
        if(dst[i] != src[i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag)
    {
        printf("Given two strings are equal\n");
    }
    else{
        printf("Given two strings are not equal\n");

    }
}


void str_rev(char *str)
{
    int start = 0;
    int end =0;
    while(str[end]!='\0')
    {
        end++;
    }
    end = end-1;
    while(start < end)
    {
        str[start] = str[start] ^ str[end];
        str[end] = str[start] ^ str[end];
        str[start] = str[start] ^ str[end];
        start++;
        end--;

    }
}

void str_palendrome(char *str)
{
    int result=1;
    int start=0;
    int end = 0;
    while(str[end]!='\0')
    {
        end++;
    }
    end = end-1;
    while(start < end/2)
    {
        if(str[start]!=str[end])
        {
            result=0;
            break;

        }
        else{
            start++;
            end--;
        }
       

    }
    if(result)
    {
        printf("Given string is palendrome\n");
    }
    else{
        printf("Given string is not palendrome\n");
    }


}
void string_reverse(char *start,char *end)
{
    while(start < end)
    {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
    }
}
void word_reverse(char *str)
{
   char* word_start=str;
   char *ptr=str;
   while(*ptr!='\0')
   {
    ptr++;
    if(*ptr =='\0')
    {
        string_reverse(word_start,ptr-1);
    }
    else if(*ptr == ' ')
    {
        string_reverse(word_start,ptr-1);
        word_start = ptr+1;
    }
    
   }
   string_reverse(str,ptr-1);

}
int main()
{
    char str[50]="Naveen";
    char str2[50]="Naveen kumar";
    char str3[50] ="madam";
    str_cat(str,str3);
    printf("%s\n",str);
    str_cmp(str,str2);
    printf("%s\n",str2);

    str_rev(str);
    printf("%s\n",str);

    str_palendrome(str3);
    word_reverse(str2);
    printf("%s\n",str2);
}