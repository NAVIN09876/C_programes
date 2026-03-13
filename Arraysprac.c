#include<stdio.h>

int ascending_order(int arr[],int len)
{
    int i,j;
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
    printf("Ascending order\n");
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int decending_order(int arr[],int len)
{
    int i,j;
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
    printf("Decending order\n");
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int delete_duplicates(int arr[],int len)
{
    int i,j,k;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<len;k++)
                {
                    arr[k]=arr[k+1];
                }
                len--;
                j--;
            }   
        } 
    }
    printf("After deleting duplicate elements from array order\n");
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int first_and_second_highest_number_from_arrray(int arr[],int size)
{
   int h1 =arr[0];
   int h2 =arr[1];
   if(h2>h1)
   {
    h1 = h1^h2;
    h2 = h1^h2;
    h1 = h1^h2;
   }
   for(int i=1;i<size;i++)
   {
    if (arr[i]>h1)
    {
        h2 = h1;
        h1= arr[i];
       
    }
    else if(arr[i]>h2 && h1<arr[i])
    {
        h2 = arr[i];

    }
   }
   printf("first highest number in array :%d\nsecond highest number in array :%d\n",h1,h2);

}
int main()
{
    int arr[] = {7,2,4,3,8,1,5,6,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    ascending_order(arr,size);
    decending_order(arr,size); 
    first_and_second_highest_number_from_arrray(arr,size);
  


}