#include<stdio.h>

int array_pointer(int *arr,int size)
{
    int *arr_ptr = arr;
    int table =20;
    for(int i=0;i<10;i++)
    printf("%d*%d =%d\n",table,*arr_ptr+i,table*(*arr_ptr+i));



    printf("in funcion\n");
    printf("start address = %p\n",arr);
    printf("end address = %p\n", arr + size - 1);

} 
int array_of_pointers(int *arr, int size)
{
    int *arr_ptr[size];

    printf("in funcion\n");

    for(int i=0;i<size;i++)
        arr_ptr[i] = &arr[i];
        
    
}
/*pointer to array
#include <stdio.h>

int main() {
    // Declare array of 10 integers
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // Pointer to array of 5 integers
    int (*ptr_arr)[5] = (int (*)[5]) arr;

    // Access first block of 5 elements
    printf("First block of 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", (*ptr_arr)[i]);
    }
    printf("\n");

    // Access second block of 5 elements using pointer arithmetic
    printf("Second block of 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", (*(ptr_arr + 1))[i]);
    }
    printf("\n");

    return 0;
}
*/

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size =sizeof(arr)/sizeof(arr[0]);
    array_pointer(arr,size);
    array_of_pointers(arr,size);

    int a=10;
    int b=20;

    int *ptr_a[2]={&a,&b};
    printf("size of = %d\n",sizeof(ptr_a[0])); 
}