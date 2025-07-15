/*Find the largest and smallest number in an array.*/
#include<stdio.h>
int find_max_and_least_number(int arr[],int size)
{
    int largest_number=arr[0];
    int smallest_number=arr[1];
    for(int i = 0; i < size; i++) {
        if (arr[i]>largest_number)
        {
            largest_number=arr[i];
        }
         if (arr[i]<smallest_number)
        {
            smallest_number=arr[i];
        }
        
    }
    printf("largest number in Array :%d\nsmallest number in Array :%d\n",largest_number,smallest_number);
} 
int main() {
    int name[5];
    int size = sizeof(name)/sizeof(name[0]);
     // same for all data types
    for(int i = 0; i < 5; i++) {
        scanf("%d", &name[i]); 
    }
    find_max_and_least_number(name,size);

   
    return 0;
}
