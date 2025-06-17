#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int position=8;
    int value=9;

    
    if(position>size)
    {
        printf("Inserction is not possoble ");

    }
    else
    {
        for(int i=size-1;i>=position-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[position]=value;
        size++;

    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}