#include <stdio.h>
#include <stdlib.h>

/*-------------------------------------------------
  1. Swap two numbers using pointers
-------------------------------------------------*/
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*-------------------------------------------------
  2. Sum of array elements using pointers
-------------------------------------------------*/
int sum_array(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += *(arr + i);
    return sum;
}

/*-------------------------------------------------
  3. Reverse array using pointers
-------------------------------------------------*/
void reverse_array(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

/*-------------------------------------------------
  4. Find largest element using pointers
-------------------------------------------------*/
int largest_element(int *arr, int size)
{
    int max = *arr;
    for(int i = 1; i < size; i++)
        if(*(arr + i) > max)
            max = *(arr + i);
    return max;
}

/*-------------------------------------------------
  5. String length using pointer
-------------------------------------------------*/
int my_strlen(char *str)
{
    int len = 0;
    while(*str++)
        len++;
    return len;
}

/*-------------------------------------------------
  6. String copy using pointer
-------------------------------------------------*/
char *my_strcpy(char *dest, const char *src)
{
    char *temp = dest;
    while(*src)
        *dest++ = *src++;
    *dest = '\0';
    return temp;
}

/*-------------------------------------------------
  7. String compare using pointer
-------------------------------------------------*/
int my_strcmp(const char *s1, const char *s2)
{
    while(*s1 && *s2)
    {
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

/*-------------------------------------------------
  8. String concatenate using pointer
-------------------------------------------------*/
char *my_strcat(char *dest, const char *src)
{
    char *temp = dest;
    while(*dest)
        dest++;
    while(*src)
        *dest++ = *src++;
    *dest = '\0';
    return temp;
}

/*-------------------------------------------------
  9. Convert string to uppercase
-------------------------------------------------*/
void to_upper(char *str)
{
    while(*str)
    {
        if(*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }
}

/*-------------------------------------------------
 10. Convert string to lowercase
-------------------------------------------------*/
void to_lower(char *str)
{
    while(*str)
    {
        if(*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
}

/*-------------------------------------------------
 11. Reverse string using pointers
-------------------------------------------------*/
void reverse_string(char *str)
{
    char *l = str;
    char *r = str + my_strlen(str) - 1;

    while(l < r)
    {
        char t = *l;
        *l = *r;
        *r = t;
        l++;
        r--;
    }
}

/*-------------------------------------------------
 12. Dynamic memory allocation
-------------------------------------------------*/
int *dynamic_array(int n)
{
    int *p = (int *)malloc(n * sizeof(int));
    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    return p;
}

/*-------------------------------------------------
 13. Function returning pointer
-------------------------------------------------*/
int *return_pointer()
{
    static int x = 100;
    return &x;
}

/*-------------------------------------------------
 14. Function pointer example
-------------------------------------------------*/
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

/*-------------------------------------------------
  MAIN FUNCTION
-------------------------------------------------*/
int main()
{
    /* Swap */
    int a = 10, b = 20;
    swap(&a, &b);
    printf("After swap: %d %d\n", a, b);

    /* Array operations */
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Sum of array = %d\n", sum_array(arr, size));
    reverse_array(arr, size);

    printf("Reversed array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Largest element = %d\n", largest_element(arr, size));

    /* String operations */
    char s1[50] = "hello";
    char s2[50] = " world";

    my_strcat(s1, s2);
    printf("Concatenation: %s\n", s1);

    printf("Length: %d\n", my_strlen(s1));

    to_upper(s1);
    printf("Uppercase: %s\n", s1);

    to_lower(s1);
    printf("Lowercase: %s\n", s1);

    reverse_string(s1);
    printf("Reversed string: %s\n", s1);

    /* Dynamic memory */
    int *p = dynamic_array(3);
    p[0] = 10; p[1] = 20; p[2] = 30;
    printf("Dynamic array: %d %d %d\n", p[0], p[1], p[2]);
    free(p);

    /* Function returning pointer */
    int *rp = return_pointer();
    printf("Returned pointer value = %d\n", *rp);

    /* Function pointer */
    int (*fp)(int,int);
    fp = add;
    printf("Function pointer add = %d\n", fp(5,3));

    fp = sub;
    printf("Function pointer sub = %d\n", fp(5,3));

    return 0;
}
