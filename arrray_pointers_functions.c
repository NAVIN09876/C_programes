#include<stdio.h>
void display(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d " ,array[i]);
    }
    printf("\n");
}
void decending_order(int *arr,int len)
{int i,j;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]<arr[j])
            {
                arr[i]=arr[i] ^ arr[j];
                arr[j]=arr[i] ^ arr[j];
                arr[i]=arr[i] ^ arr[j];

            }
        }

    }
}
void ascending_order(int *arr,int len)
{int i,j;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i] ^ arr[j];
                arr[j]=arr[i] ^ arr[j];
                arr[i]=arr[i] ^ arr[j];

            }
        }

    }
   
}
int delete_duplicates(int *arr,int len)
{
    int i,j,k;
    int size = len;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<len-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                len--;
                j--;
            }
        }

    }
    return len;
}
void first_and_secomd_highest_element_in_array(int *array,int size)
{
    int h1=array[0];
    int h2=array[1];
    if(h2 > h1)
    {
        h1 = h1^h2;
        h2 = h1^h2;
        h1 = h1^h2;
    }
    for(int i=2;i<size;i++)
    {
        if(array[i]>h1)
        {
            h2=h1;
            h1 = array[i];
        }
        else if(array[i]<h1 && array[i]>h2)
        {
            h2 =array[i];
        }
    }
    printf("first highest element in aryyay = %d\nsecond highest element in aryyay = %d\n",h1,h2);
}
int main()
{
    int array [] = {1,2,3,4,5,6,7,8,9,10,1,2};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original:\n");
    display(array, size);

    size = delete_duplicates(array, size);
    printf("After deleting duplicates:\n");
    display(array, size);

    decending_order(array, size);
    printf("Descending order:\n");
    display(array, size);

    ascending_order(array, size);
    printf("Ascending order:\n");
    display(array, size);
    first_and_secomd_highest_element_in_array(array,size);

    return 0;
}
