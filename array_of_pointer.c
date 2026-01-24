//array of pointer
/*#include<stdio.h>
int main()
{
    char arr[] = "Naveen";
    char *ptr[6];
    ptr = &arr; and ptr =arr ; both are wrong we need assigine each element in array to the pointer 

}

*/

#include <stdio.h>
int main()
{
    char arr[] = "naveen";
    char *ptr[6];

    for (int i = 0; i < 6; i++)
        ptr[i] = &arr[i];

    for (int i = 0; i < 6; i++)
        printf("%c ", *ptr[i]);
    printf("\n");

    return 0;
}

