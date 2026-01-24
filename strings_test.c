#include<stdio.h>
int my_strlen(char string[])
{
    int i;
    int length=0;
    for(i=0;string[i]!='\0';i++)
    {
        length++;
        
    }
    printf("length of string = %d\n",length);
    return length;
    
}
char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return dest;
}
int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    int res = str1[i] - str2[i];

    
    if(res == 0)
        printf("Strings are equal\n");
    else if(res > 0)
        printf("String 1 is greater\n");
    else
        printf("String 2 is greater\n");

    return 0;
}
char *my_strcat(char *str1,char *str2)
{
    int i = 0, j = 0;

    while(str1[i] != '\0')
        i++;

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
    for(int i=0;str1[i]!='\0';i++)
    {
        printf("%c",str2[i]);

    }
    printf("\n");
    return str1;
}
char convert_upper(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }

    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");     
}

char convert_lower(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }

    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");     
}

void str_rev(char *str)
{
    
}

int main()
{
    char arr[]="Yadava";
    char arr2[] ="Naveen ";
    my_strlen(arr);
    //my_strcpy(arr2,arr);
    my_strcmp(arr2,arr);
    my_strcat(arr,arr2);
    convert_upper(arr);
    convert_lower(arr);

}