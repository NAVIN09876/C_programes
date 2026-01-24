#include<stdio.h>
void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int sum_of_array_elements(int arr[],int size)
{
    int sum=0;
     for(int i=0;i<size;i++)
    {
        sum += arr[i];
    }
    printf("Sum of array elements = %d\n",sum);
    return sum;
}

int average_of_array_elements(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum += arr[i];
    }

    int avarage = sum/size; 

    printf("Average of array elements = %d\n",avarage);
    return avarage;

}
int largest_and_smallest_element_in_an_array(int arr[],int size)
{
    int smallest = arr[0];
    int largest = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<smallest)
        smallest = arr[i];

        if(arr[i]>largest)
        largest = arr[i];
    }
    printf("Smallest element in array = %d\n",smallest);
    printf("Largest element in array = %d\n",largest);

}
void Count_even_and_odd_numbers_in_an_array(int arr[],int size)
{
    int even=0;
    int odd =0;
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
    printf("EVen numbers count = %d\n",even);
    printf("Odd number count = %d\n",odd);

}
void Reverse_an_array_in_place(int arr[], int size)
{
    int i = 0, j = size - 1;

    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("Reversed array: ");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void Check_if_an_array_is_sorted(int arr[],int size)
{
    int isascending = 1;//assume ascending
    int isdescending = 1;// assume descending

    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i+1] < arr[i])
        {
           isascending=0;
        }
        if(arr[i+1] > arr[i])
        {
           isdescending=0;
        }
    }
    if(isascending)
        printf("Ascending order\n");
    else if(isdescending)
        printf("Descending order\n");
    else
        printf("Not in ascending order or Descending\n");

}
void Find_the_frequency_of_each_element_in_an_array(int arr[], int size)
{
    int visited[size];

    for(int i = 0; i < size; i++)
        visited[i] = 0;

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
        printf("%d occurs %d times\n", arr[i], count);
    }
}
int second_largest_element_in_an_array(int *arr,int size)
{
    int first_latgest=arr[0];
    int second_largest=arr[1];

    if(second_largest>first_latgest)
    {
        first_latgest = first_latgest ^ second_largest;
        second_largest = first_latgest ^ second_largest;
        first_latgest = first_latgest ^ second_largest;

    }

    for(int i=0;i<size;i++)
    {
        if(arr[i]>first_latgest)
        {
            second_largest=first_latgest;
            first_latgest= arr[i];
        }
        else if( arr[i]<first_latgest && arr[i]>second_largest)
        {
            second_largest=arr[i];
        }
    }
    printf("second largest elenent in array = %d\n",second_largest);

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    print_array(arr,size);
    sum_of_array_elements(arr,size);
    average_of_array_elements(arr,size);
    largest_and_smallest_element_in_an_array(arr,size);
    Count_even_and_odd_numbers_in_an_array(arr,size);
    Reverse_an_array_in_place(arr,size);
    Check_if_an_array_is_sorted(arr,size);
    Find_the_frequency_of_each_element_in_an_array(arr,size);
    second_largest_element_in_an_array(arr,size);
}