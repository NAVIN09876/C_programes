#include<stdio.h>
int *create_array(int arr[],int size_arr)
{
    for(int i=0;i<size_arr;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;
}
void Display_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int highest_number(int arr[],int size)
{
    int highest_num=arr[0];
    int second_highest=arr[1];
    if(second_highest>highest_num)
    {
        highest_num = highest_num ^ second_highest;
        second_highest = highest_num ^ second_highest;
        highest_num = highest_num ^ second_highest;
    }
    
    for(int i=2;i<size;i++)
    {
        if(arr[i]>highest_num)
        {
            second_highest = highest_num;
            highest_num = arr[i];
        }
        else if(arr[i]<highest_num && arr[i]>second_highest)
        {
            second_highest = arr[i];

        }   
    }
    printf("highers number in array:%d\n",highest_num);
    printf("second number in array:%d\n",second_highest);
}
int *reves_array(int arr[],int size)
{
    int *start = arr;
    int *end = arr+size -1;
    while(start < end)
    {
       *start = *start ^ *end;
       *end = *start ^ *end;
       *start = *start ^ *end;
        start++;
        end--;

    }
    Display_array(arr,size);  
}

int sum_of_array(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum +=arr[i];

    }
    printf("sum of array = %d\n",sum);
}
int delete_duplicate_elements(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for ( int j=i+1; j < size; j++)
        {
            if(arr[i]==arr[j])
            {
                for (int k = j; k < size; k++)
                {
                    arr[k]= arr[k+1];
                }
                j--;
                size--;
                
            }
        }
        
    }
    printf("after deleting duplicate elements :");
    Display_array(arr,size);
}
void Count_even_odd(int arr[],int size)
{
    int even=0;
    int odd=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even number in array :%d\n",even);
    printf("Odd number in array :%d\n",odd);

}
int search_an_element(int arr[],int size,int element)
{
    int posotion=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            posotion=i;
        }
    }
    if(posotion)
    {
        printf("Element found at posotion:%d\n",posotion);
    }
    else{
        printf("Element not found in the array\n");

    }
    
}
void bubble_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    Display_array(arr,n);
}
void find_frequency_array(int arr[],int size)
{
    int visited[size];
    for(int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    for(int i = 0; i < size; i++)
    {
        if(visited[i] == 1)
            continue;

        int count = 1;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d -> %d times\n", arr[i], count);
    }

}
void palendrome_or_not(int arr[],int size)
{
    int flag =1;
    int *start = arr;
    int *end = arr+size -1;
    while(start < end)
    {
       if(*start != *end)
       {
        flag = 0;
       }
        start++;
        end--;

    }
    if(flag==1)
    {
        printf("Array is palendrome\n");
    }
    else{
        printf("Not palendrome\n");
    }
    
}
int main()
{
    int size_of_array;
    printf("Enter size of array: ");
    scanf("%d",&size_of_array);
    int array[size_of_array];
    int *temp=create_array(array,size_of_array);
    Display_array(temp,size_of_array);
    int h1=highest_number(temp,size_of_array);
    //reves_array(temp,size_of_array);
    sum_of_array(temp,size_of_array);
    delete_duplicate_elements(temp,size_of_array);
    Count_even_odd(temp,size_of_array);
    search_an_element(temp,size_of_array,5);
    find_frequency_array(temp,size_of_array);
    palendrome_or_not(temp,size_of_array);
return 0;
}