#include<stdio.h>
#include<stdlib.h>
int swap(int num1,int num2)
{
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
}

int ascending_order(int arr[],int size)
{
	int i,j;
	for (i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
				arr[i]=arr[i]^arr[j];
				arr[j]=arr[i]^arr[j];
				arr[i]=arr[i]^arr[j];
			}
		}
	}


	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");

}



int find_h1_h2(int arr[],int size)
{
	int h1=arr[0];
	int h2=arr[1];
	
	if(h2>h1)
	{
		swap(h2,h1);
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]>h1)
		{
			h2=h1;
			h1=arr[i];
		}
	
		else if(h1>arr[i] && arr[i]>h2)
	{
		h2=arr[i];
	}
	}
	printf("h1=%d h2=%d\n",h1,h2);
}
int delet_duplicate(int arr[],int size)
{
	int i,j,k;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<size;k++)
				{
					arr[k]=arr[k+1];
				}
				size--;
				j--;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
int main()
{
	int arr[]={2,1,7,6,3,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);


	find_h1_h2(arr,size);

	delet_duplicate(arr,size);
	ascending_order(arr,size);
}






