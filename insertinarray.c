#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int pos,value;
    
    printf("Entre posotion  :");
    scanf("%d",&pos);
    
    printf("Entre value :");
    scanf("%d",&value);
    
    if(pos > size+1)
    {
        printf("insertion not possible");
        
        return 0;
    }
    
    size+1;
    
    for(int i=size-1;i>=pos-1;i--)
    {
        arr[i + 1]=arr[i];
    }
    arr[pos-1] = value;
    
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}
    

