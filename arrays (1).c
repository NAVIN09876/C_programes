What is array and advantages

Array declaration and definition

Array reading and writing

how to pass array as argument in the functions

Relation between pointer and arrays

Array types(1 dimentional, multi dimentional)

programs

int x1, x2, x3, .....,x20; // 20 * 4 = 80 Bytes;//1000, 1080


int arr[20]; //80 bytes//1000, 1080

char arr[10];



arr[19] ===>x20;
arr[0] ====> x1;

index is 0 to size-1;


Declaration:
Syntax:

data_type	array_name[size];

ex:
int arr[10]; //40 Bytes
printf("%d", sizeof(arr));
char ch[20]; //20 Bytes
printf("%d", sizeof(ch));
float x[30]; //120 bytes
printf("%d", sizeof(x));

int *ptr;

int x;
int *ptr = &x;
int a;
int *ptr;

int array;

int arr[100];

int *ptr;

int ptr[10];

int *ptr;

int *ptr[10];


int *p1, *p2, *p3; 
or
int *p[3];

Definition:

syntax:
data_type	array_name[size] = {element1, elemt2.....};

ex:
int a[10];//declaration

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//definition

( and )
[ and ]
{ and }


char a = 'B';

char ch[5] = {'h', 'e', 'l', 'l', 'o'};

char element = 'A';

int a[10]; //all are garbage values

int a[10] = {};// all are 0's 
or
int a[10] = {0};


int a[10] = {1,2,3}; //a[0] = 1, a[1]  = 2, a[2] = 3, a[3] = 0, a[4] = 0.......a[9] = 0


int a[] = {1,2,3,4};//allowed

int a[]; //not allowed

int a[3] = {[0...1]=3};

a[0] = 3, a[1] = 3, a[2] = 0;

int a[3] = {[0...1]=3};

int a[] = {[0...1]=3};


#include <stdio.h>
int main()
{
	int x, y, z;
	printf("Enter x value");
	scanf("%d", &x);
	printf("Enter y value");
	scanf("%d", &y);
	printf("Enter z value");
	scanf("%d", &z);
	printf("\nx is %d, y is %d, z is %d", x, y, z);

}

#include <stdio.h>
int main()
{
	int arr[3];// int x, y, z;
	printf("Enter arr[0] value");
	scanf("%d", &arr[0]);
	printf("Enter arr[1] value");
	scanf("%d", &arr[1]);
	printf("Enter arr[2] value");
	scanf("%d", &arr[2]);
	printf("\narr[0] is %d", arr[0]);
	printf("\narr[1] is %d", arr[1]);
	printf("\narr[1] is %d", arr[2]);

}

#include <stdio.h>
int main()
{
	int arr[10];
	printf("Enter arr[0] value");
	scanf("%d", &arr[0]);
	printf("Enter arr[1] value");
	scanf("%d", &arr[1]);
	printf("Enter arr[2] value");
	scanf("%d", &arr[2]);
	printf("Enter arr[3] value");
	scanf("%d", &arr[3]);
	printf("Enter arr[4] value");
	scanf("%d", &arr[4]);
	printf("Enter arr[5] value");
	scanf("%d", &arr[5]);
	printf("Enter arr[6] value");
	scanf("%d", &arr[6]);
	printf("Enter arr[7] value");
	scanf("%d", &arr[7]);
	printf("Enter arr[8] value");
	scanf("%d", &arr[8]);
	printf("Enter arr[9] value");
	scanf("%d", &arr[9]);
	printf("\narr[0] is %d", arr[0]);
	printf("\narr[1] is %d", arr[1]);
	printf("\narr[0] is %d", arr[2]);
	printf("\narr[1] is %d", arr[3]);
	printf("\narr[0] is %d", arr[4]);
	printf("\narr[1] is %d", arr[5]);
	printf("\narr[0] is %d", arr[6]);
	printf("\narr[1] is %d", arr[7]);
	printf("\narr[0] is %d", arr[8]);
	printf("\narr[1] is %d", arr[9]);
}

2GB(stack + heap)
1GB DS
1GB CS
#include <stdio.h>
int main()
{
	int arr[10000];
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size; i++)
	{
		printf("Enter arr[%d] value", i);
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<size; i++)
	{
		printf("\narr[%d] is %d", i, arr[i]);
	}
}



#include <stdio.h>
void swap(int a[], int size)
{
	int tmp;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	printf("\n a[0] is %d, a[1] is %d", a[0], a[1]);
	return;
}
int main()
{
	int x[2] = {10, 20};
	swap(x, 2);
	return 0;
}


#include <stdio.h>
void swap(int a[])
{
	int a[];
	int size;
	size = sizeof(a)/sizeof(a[0]);//8/4 = 2;//this is not correct
	int tmp;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	printf("\n a[0] is %d, a[1] is %d", a[0], a[1]);
	return;
}
int main()
{
	int x[2] = {10, 20};
	swap(x);
	return 0;
}


int a = 10;

int *ptr = &a;

int a=1, b=2,c=3,d=4,e=5;
or
int arr[5] = {1,2,3,4,5};//here arr is also a pointer, which points array base element address
//1000 to 1019
==>arr = &arr[0];

arr(&arr[0]) vs &arr

1000	1004	1008	1012	1016
int x = 100;
x++;//x = x+1;//101

int *ptr;//1000

ptr++;//ptr = ptr + 1; 1004

int x =1;
int *ptr1, *ptr2;
ptr1 = 1000;
ptr2 = 1001;

char *ptr;//1000
ptr++;//1001


double *ptr//1000
ptr++;//1008

int *ptr;// 1000;
ptr = ptr+2;//1008

printf("%p %p", ptr, ptr+2);

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int *ptr ;
    int arr[5] = {1,2,3,4,5};//&arr ==> int (*arr)[5];
                            // is pointer to array of 5 integer elements
    //vs
    //int *ptr[5];//ptr is array of 5 integer pointer elements
    printf("%d %d %d %d %d %p %p %p", arr[0], arr[1], arr[2], arr[3], arr[4], arr, &arr, &arr[0]);//arr = &arr[0];
    ptr = &arr;
    //printf("\n%p %p", ptr, ptr+1);
    printf("\n%p %p %p", arr+1, &arr[0] + 1, &arr+1);
    return 0;
}

//1000 1004	1008 1012 1016
 arr[0]
int arr[5] = {1,2,3,4,5}; //20 bytes(1000, 1019)
int *ptr = arr; //ptr = &arr[0];//1000
printf("%d %d", sizeof(ptr), sizeof(arr));

int main() {
    int arr[5] = {1,2,3,4,5}; //20 bytes(1000, 1019)
    int *ptr = arr; //ptr = &arr[0];//1000
    //ptr+1 ==>1004 ===>
    printf("%d %d", sizeof(ptr), sizeof(arr));
    return 0;
}

#include <stdio.h>

int main()
{
    
	int arr[5] = {1,2,3,4,5}; //20 bytes(1000, 1019)
    int *ptr = arr; //ptr = &arr[0];//1000
    printf("%d %d %d %d", arr[0], *(arr+0), ptr[0], *(ptr+0));//printf("%d %d %d %d", arr[0], *arr, ptr[0], *ptr);
    //arr[i] = *(arr+i) = ptr[i] = *(ptr+i);
}

//ptr++ ===> 1004 (ptr + 1) ==> &arr[1]
printf("%d %d", arr[1], *(ptr+1));//*(arr+1);

//int *ptr = arr or int *ptr = &arr[0];

//int *ptr = &arr;

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5}; //20 bytes(1000, 1019)
    int *ptr = arr; //ptr = &arr[0];//1000
    printf("%p %p", ptr, arr);
    printf("\n%d %d", sizeof(ptr), sizeof(arr));
    printf("\n%p %p", ptr+1, arr+1);
    printf("\n%d %d", *(ptr+1), *(arr+1));//arr[1]
    printf("\n%d %d", ptr[1], *(arr+1));//arr[1]
     //ptr+1 ==>1004 ===>
    //*(ptr + i) ==> arr[i] ===> *(arr + i) ===>ptr[i]
    //*ptr ==>arr[0]  ===>*arr ===>ptr[0];
    //*(ptr + 3) ==> arr[3] ===> *(arr + 3) ===>ptr[3]
    return 0;
}

arr=============>&arr[0]==========>ptr
arr+1===========>&arr[1]==========>ptr+1
*(arr+1)========>arr[1]===========>*(ptr+1)

printf("%d %d", sizeof(ptr), sizeof(arr));
*ptr==> *(&arr[0])===>arr[0]
ptr = &arr[0];//ptr = &x;
*ptr = arr[0];//*ptr = x;
*(ptr + 0) ====>  arr[0];
(ptr + 1) ==> &arr[1]
*(ptr + 1) ====>  arr[1];

(arr + 1) ===> (ptr + 1)

ptr = ptr + 2;//1008(&arr[2])
(ptr + 2) ==> &arr[2]
*(ptr + 2) ====>  arr[2];
//int *ptr = &arr;
//ptr++ ===>1004

//arr = &arr[0];

arr[2] or *(arr + 2) or *(ptr + 2);


&arr[2] or (arr + 2) or (ptr + 2);

&arr+1

int main()
{
	int arr[4] = {10, 20, 30, 40};
	//printf("%p %p %p", arr, &arr[0], &arr);
	int *ptr = &arr;
	printf("%p %p\n", ptr, &arr);
	ptr = ptr+1;
	printf("%p %p", ptr, &arr+1);
	return 0;
}

what is the difference between array of 10 integer pointer variables vs  pointer to array of 10 integer varibles?
int arr[10] = {1,2,3,4,5,6,7,8,9,10};===>here &arr is int (*arr)[10];
int *arr[10]; vs int (*arr)[10] ===> &arr;

int arr[] = {1,2,3,4,5,6,7,8,9,10}//int (*arr)[5];
&arr is called pointer to array of 10 integer elements
int main()
{
	int arr[4] = {10, 20, 30, 40};
	printf("%p %p %p", arr, &arr[0], &arr);
	printf("\n%p %p %p", arr+1, &arr[0]+1, &arr+1);
	return 0;
}

#include <stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5}; //1000
    int *ptr1 = arr;//&arr[0] //ptr1 = 1000, ptr1++ = 1004//&arr[1] (ptr1 + 1) = &arr[1]
    //ptr1 = &arr[0] = arr;	&& *(ptr +0) = arr[0];
    //(ptr1 + 1) = &arr[1]  && *(ptr1 + 1) = arr[1];
    //(ptr1 + 2) = &arr[2]  && *(ptr1 + 2) = arr[2];
    //(ptr1 + 3) = &arr[3]  && *(ptr1 + 3) = arr[3];
    //arr[2] = *(ptr1 + 2);

    int *ptr2 = &arr;//ptr2 = 1000, ptr2++ = 1004; &arr+1 = 1020
	ptr1++;
	ptr2++;
    
	printf("%p\n", ptr1);//1004
	printf("%p", ptr2);//1004

}

#include <stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5}; //1000
    int *ptr1 = arr;//&arr[0] //ptr1 = 1000, ptr1++ = 1004
    printf("%p %p\n", arr, &arr);//1004
    int *ptr2 = &arr;//ptr2 = 1000, ptr2++ = 1004; &arr+1 = 1020
	printf("%p\n", ptr1+1);//1004
	printf("%p\n", ptr2+1);//1004
	printf("%p\n", arr +1);//1004
	printf("%p", &arr+1);//1020

}

int x;
ptr = &x;
int *ptr1 = arr //&arr[0]==>&x;


int arr[5] = {1,2,3,4,5};
int *ptr = arr;

sizeof(arr); //20 Bytes

sizeof(ptr); // 4 Bytes 32 bit machine and 8 Bytes in 64 bit

char arr[2] = {'1','2'};
char *ptr = arr;

sizeof(arr); //2 Bytes

sizeof(ptr); //4 Bytes 32 bit machine and 8 Bytes in 64 bit

0xffffffff

0x00000000

1 to 15

0001
//finding the lengh of the array (with sizeof and without sizeof)

//With using sizeof
#include <stdio.h>
int main()
{

    int a,b,c,d,e,f;
	int arr[] = {1,2,3,4,5,6};//definition
	//int arr[];//declaration, it is invalid
	int length=0;
	
	length = sizeof(arr)/sizeof(arr[0]);//24/4 = 6
	printf("Number of elements in array is %d", length);
	return 0;
}

int *ptr[6];//array of 6 integer pointers
int arr[] = {1,2,3,4,5,6};
&arr//pointer which is pointing to 6 integer elements


without using sizeof operator:

#include <stdio.h>
#define my_sizeof(x) ((char *) (&x + 1) - (char *)(&x))
//&arr is 1000, &arr + 1 is 1024 - 1000 //24

//&arr[0] is 1000, &arr[0] + 1 is 1004 - 1000 4

//(integer pointer)1000 - 3 ==>988
//(character pointer)1000 - 3 ==>997
#define X 10
#define my_sizeof(x) ((&x + 1) - (&x))
int main()
{
	int arr[] = {1,2,3,4,5,6};//definition 1000 to 1023
	int length=0;
	
	length = my_sizeof(arr)/my_sizeof(arr[0]); //24/4 = 6
	printf("Number of elements in array is %d", length);
	return 0;
}
my_sizeof(arr) ((char *) (&arr + 1) - (char *)(&arr))//1024 - 1000 ===>24

my_sizeof(arr[0]) ((char *) (&arr[0] + 1) - (char *)(&arr[0]))//1004 - 1000 ===>4

int *ptr = &x//1000
ptr = ptr-1;//996

char *ptr = &x//1000
ptr = ptr-1;//999

int x;
int *ptr;
ptr = &x; //ptr or &x is 1000	1001	10012	1003
ptr++;
what is ptr+1 value:1004

char ch;
char *ptr;
ptr = &ch;//ptr or &x is 1000
what is ptr+1 value:1001

#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6};
	int length=0;
	
	length = *(&arr + 1)- arr; 
	printf("Number of elements in array is %d", length);
	return 0;
}

*(int (*)[6]) = 6  ==> (int (*arr)[6]
*(&arr + 1)

int *ptr[10];
vs 
&arr(int (*)[10])

 #include <stdio.h>
int main()
{
	int arr[] = {1,2,4,5};
	int length=0;
	
	length = *(&arr + 1)- arr;
	printf("%d %d", arr, (&arr + 1));
	printf("Number of elements in array is %d", length);
	
	return 0;
}

int *ptr;
int (*)[4]ptr;

int (*ptr)[6];//&arr
vs
int *ptr[6];//arr
int a[6];



1000	1004	1008	1012	1016	1020	1024//arr[7]
arr // is a pointer and points to the base address of array(&arr[0])  ===> arr = &arr[0]; 1000

&arr //is a pointer and points to the overall 6 elements of array====> &arr = 1000

arr + 1 ====> &arr[1];//1004

&arr + 1 =====> //1000 + 24 = 1024

char arr[6];

arr //1000
&arr//1000
arr + 1 //1001

&arr + 1//1006


Initialize the elements of the array.
   &arr => This is the pointer to array which points at the same memory address as a.
   &arr + 1 => It points at the address after the end of the array.
   *(arr+1) => Dereferencing to *(&arr + 1) gives the address after the end of the last element.
   *(a+1)-a => Subtract the pointer to the first element to get the length of the array.
   Print the size.
   
   length = *(&arr + 1)- arr;

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a value:");
	scanf("%d", &a);
	
	printf("\nEnter b value:");
	scanf("%d", &b);

	printf("\nEnter c value:");
	scanf("%d", &c);
	printf("\na is %d", a);
	printf("\nb is %d", b);
	printf("\nc is %d", c);
	return 0;
}

#include <stdio.h>
int main()
{
	int a[100], size,i;
	printf("Enter number of array elements:");
	scanf("%d", &size);
	
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	
	
	printf("\nArray elements are:");
	for(i=0; i<size; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}

Syntax:

data_type  array_name[size1][size2]....[sizeN];

data_type: Type of data to be stored in the array. 
           Here data_type is valid C data type
array_name: Name of the array
size1, size2,... ,sizeN: Sizes of the dimensions

Ex;
int one[10];//10 elements , 40 bytes size

Two dimensional array:
int two[10][20];//200 elements, 800 bytes
char str[10][20];//200 elements, 200 bytes

int arr[3][3];//9 elements, 36 bytes

1	2	3
4	5	6
7	8	9



Three dimensional array:
int three_d[10][20][30];//6000 elements, 24000 bytes

int x[3] = {1,2,3};
int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};


x[0][0] = 0;
x[0][1] = 1;
x[0][2] = 2;
x[0][3] = 3;
x[1][0] = 4;
x[2][3] = 11;
x[2][2] = 10;
x[1][1] = 5;
_				__
|0	1	2	3	|
|4	5	6	7	|	
|8	9	10	11	|
__		        __

x[2][1] = 9;
x[1][2] = 6;
x[2][3] = 11;
int x[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};

or

int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}};

#include <stdio.h>    
void main ()    
{    
    int arr[3][3],row,col;     
    for (row=0;row<3;row++) //0<3 	1<3  	2<3		3<3
    {    
        for (col=0;col<3;col++)//0<3  1<3  2<3	3<3
        {    
            printf("Enter a[%d][%d]: ",row,col); //0 0	0 1    0 2   	1 0 1 1 1 2         
            scanf("%d",&arr[row][col]);//arr[0][0] arr[0][1] arr[0][2]
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(row=0;row<3;row++)    
    {    
        printf("\n");    
        for (col=0;col<3;col++)    
        {    
            printf("%d\t",arr[row][col]);    
        }    
    }    
}


// Online C compiler to run C program online
#include <stdio.h>    
void main ()    
{    
    int arr[3][3] = {0};
    int i=0,j=0;     
    while(i<3) //0<3 	1<3  	2<3		3<3
    {    
        j=0;
        while(j<3)//0<3  1<3  2<3	3<3
        {    
            arr[i][j] = i;
            j++;
        }    
        i++;
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<3;i++)    
    {    
        printf("\n");    
        for (j=0;j<3;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}


// Online C compiler to run C program online
#include <stdio.h>    
void main ()    
{    
    int arr[3][3],i,j;     
    for (i=0;i<3;i++) //0<3 	1<3  	2<3		3<3
    {    
        for (j=0;j<3;j++)//0<3  1<3  2<3	3<3
        {    
            arr[i][j] = i;
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<3;i++)    
    {    
        printf("\n");    
        for (j=0;j<3;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }    
}

#include <stdio.h>    
void main ()    
{    
    int arr[][3] = {1,2,3,4,5,6,7}; //valid
    int arr[3][] = {1,2,3,4,5,6}; //Not valid
}  

int a[] = {1,2,3};

int arr[2] = {1,2,3,4,5,6};


int arr[2] = {1,2};

printf("%d", arr[2]);


Linked list
Bitwise operators
Strings
Arrays




1. Finding the number of elements in given array(using sizeof/ without using sizeof)
2. Finding 1st highest and second highest elements in given array)
3. Finding 1st lowest and second lowest elements in given array)
4. Arrange array elements in sorting order
5. Removing the duplicate elements in given array

//With using sizeof
#include <stdio.h>
int main()
{

    //int a,b,c,d,e,f;
	int arr[] = {1,2,3,4,5,6};//definition
	//int arr[];//declaration, it is invalid
	int length=0;
	
	length = sizeof(arr)/sizeof(arr[0]);//24/4 = 6
	printf("Number of elements in array is %d", length);
	return 0;
}

int *ptr[6];//array of 6 integer pointers
int arr[] = {1,2,3,4,5,6};
&arr//pointer which is pointing to 6 integer elements


without using sizeof operator:


#include <stdio.h>
#define my_sizeof(x) ((char *) (&x + 1) - (char *)(&x))
//&arr is 1000, &arr + 1 is 1024 - 1000 //24
//1024-1==>1020

//&arr[0] is 1000, &arr[0] + 1 is 1004 - 1000 4

//(integer pointer)1000 - 3 ==>988
//(character pointer)1000 - 3 ==>997
#define X 10

#define my_sizeof(x) ((char *) (&x + 1) - (char *)(&x)) //correct

//#define my_sizeof(x) ((&x + 1) - (&x))  ======>wrong

int main()
{
	int arr[] = {1,2,3,4,5,6};//definition 1000 to 1023, here &arr = arr = &arr[0] = 1000
	int length=0;
	
	length = my_sizeof(arr)/my_sizeof(arr[0]); //24/4 = 6
	printf("Number of elements in array is %d", length);
	return 0;
}
//1000 - 1 ===>996 (for int)
//1000 - 1 ===>999 (for char)

// ((char *) (&arr + 1) - (char *)(&arr)) //1024 - 1000 = 24

// ((char *) (&arr[0] + 1) - (char *)(&arr[0])) //1004 - 1000 = 4

//1st highest
#include <stdio.h>
int main()
{
	int arr[] = {7, 8, 2, 10, 9, 1};//Array definition
	int h1, size, i;// h1 value is garbage value
	printf("%d %d %d", h1, size, i);
	
	size = sizeof(arr)/sizeof(arr[0]);//24/6 ===>6
	h1 = arr[0]; //h1 = 7;
	for(i=1; i<size; i++) //1<6		2<6			3<6			4<6		5<6			6<6
	{
		if(arr[i] > h1)// 8 > 7		2 > 8		10 > 8		9 > 10	1 > 10
		{
			h1 = arr[i]; // h1 = 8;				//h1 = 10;
		}
	}
	printf("highest is %d", h1);
	
	return 0;
}

//1st highest and 2nd highest

#include <stdio.h>
int main()
{
	int arr[6] = {7, 8, 2, 10, 9, 1};
	int h1, h2, size, i;
	printf("%d %d %d", h1, h2, size);//garbage	garbage	garbage
	
	size = sizeof(arr)/sizeof(arr[0]);//6
	h1 = arr[0]; //h1 = 7
	h2 = arr[1]; // h2 = 8
	if(h2 > h1) //8 > 7
	{
		h1 = h1 ^ h2;
		h2 = h1 ^ h2;
		h1 = h1 ^ h2;
	}
	//h1 = 8, h2 = 7
	
	for(i=2; i<size; i++) //2<6		3 < 6						4 < 6						5<6				6 < 6
	{
		if(arr[i] > h1)	 // 2 > 8	10 > 8						9 > 10					    1 > 10
		{
			h2 = h1;				//h2 = 8
			h1 = arr[i];			//h1 = 10
		}
		else if(arr[i] > h2) //(2 > 7)								(9 > 8)					( 1>9)
		{
			h2 = arr[i];											//h2 = 9;
		}
	}
	
	printf("1st highest is %d, second highest is %d", h1, h2);
	
	return 0;
}	

//1st lowest

#include <stdio.h>
int main()
{
	int arr[6] = {7, 8, 2, 10, 9, 1};
	int lowest;
	printf("%d", lowest);
	lowest = arr[0]; //lowest = 7;
	printf("%d", lowest);
	for(int i=1; i<6; i++) 	//1<6		2<6			3<6		4<6		5<6			6<6
	{
		if(arr[i] < lowest) //8 < 7		2<7			10 < 2	9<2		1<2
		{
			lowest = arr[i];//			lowest = 2					lowest = 1
		}
	}
	printf("lowest is %d", lowest);//lowest is 1
	
	return 0;
}

#include <stdio.h>
int main()
{
	int arr[6] = {8, 7, 2, 10, 9, 1};
	int l1, l2, size;
	
	size = sizeof(arr)/sizeof(arr[0]);//6
	l1 = arr[0];//l1 = 8
	l2 = arr[1];//l2 = 7
	if(l2 < l1) //7 < 8
	{
		l1 = l1 ^ l2;
		l2 = l1 ^ l2;
		l1 = l1 ^ l2;
	}
	//l1 = 7, l2 = 8
	
	for(int i=2; i<size; i++) //2<6		3<6
	{
		if(arr[i] < l1)		 //2<7		
		{
			l2 = l1;		//l2 = 7
			l1 = arr[i];	//l1 = 2
		}
		else if(l1 < arr[i] && arr[i] < l2)
		{
			l2 = arr[i];
		}
	}
	
	printf("1st lowest is %d, second lowest is %d", l1, l2);
	
	return 0;
}	

	
#include <stdio.h>
int main()
{
	int arr[6] = {8, 7, 2, 10, 9, 1};
	int l1, l2;
	l1 = arr[0]; //l1 = 8
	l2 = arr[1]; // l2 = 7
	if(l2 < l1) //7 < 8
	{
		l1 = l1 ^ l2;
		l2 = l1 ^ l2;
		l1 = l1 ^ l2;
	}
	//l1 = 7, l2 = 8
	
	for(int i=2; i<6; i++) //2<6	3 < 6		4 < 6								5<6				6 < 6
	{
		if(arr[i] < l1)	// 2 < 7	10 < 2		9 < 2								1 < 2
		{
			l2 = l1;	// l2 = 7													l2 = 2;
			l1 = arr[i];// l1 = 2													l1 = 1;
		}
		else if(arr[i] > l1 && arr[i] < l2) //(10 > 2 && 10 < 7)	(9 > 2 && 9 < 7)	(10>1 && 1>9)
		{
			l2 = arr[i];						
		}
	}

	printf("1st lowest is %d, second lowest is %d", l1, l2);
	
	return 0;
}

int arr[6] = {8, 7, 2, 10, 9, 1};
Sorting elements of a given array:



ascending order/increasing order ===> {1, 2, 7, 8, 9, 10};

2 8 7 10 9 1
1 8 7 10 9 2

#include <stdio.h>
//1 8 7 10 9 2
int main()
{
	int arr[6] = {7, 8, 2, 10, 9, 1};//{1,8,7,10,9,2};
	int i,j;// 
	int size = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0; i<size; i++)			//0<6				1<6																	1<6
	{
		for(j= i+1; j<size; j++)//j=1	1<6		2<6			3 < 6		4<6			5<6				6<6
		{
			if(arr[j] < arr[i]) // 8 < 7	2 < 7		10 < 2		9 < 2		1 < 2
			{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[i] ^ arr[j];
				arr[i] = arr[i] ^ arr[j];
											//arr[0] = 2, arr[2] = 7;			//arr[0] = 1, arr[5] = 2
			}
		}
		//{1, 8, 7, 10, 9, 2}; for i=0;
		//{1, 2, 8, 10, 9, 7};	for i=1;
		//{1, 2, 7, 10, 9, 8}; for i=2;
		//{1, 2, 7, 8, 10, 9}; for i=3;
		//{1, 2, 7, 8, 9, 10}; for i=4;
		
	}
	
	
	for(i=0; i<6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
	
}

Decending order ===> {10, 9, 8, 7, 2, 1};
#include <stdio.h>
int main()
{
	int arr[6] = {7, 8, 2, 10, 9, 1};
	int i,j;
	
	for(i=0; i<6; i++)
	{
		for(j= i+1; j<6; j++)
		{
			if(arr[j]  > arr[i])
			{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[i] ^ arr[j];
				arr[i] = arr[i] ^ arr[j];
			}
		}
	}
	
	for(i=0; i<6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
	
}


remove duplicates for sorted array:
input:
{1, 2, 2, 3, 4, 4, 4, 5, 5};

output:
{1, 2, 3, 4, 5};

#include <stdio.h>
int main()
{
	int arr[9] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	int i,j=0;
	int tmp[9];
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<size-1; i++) //0<8 	1<8		2<8			3<8			4<8 	5<8		6<8		7<8		8<8
	{
		if(arr[i] != arr[i+1])
		{
			tmp[j] = arr[i]; //tmp[0] = 1; 		tmp[1] = 2	tmp[2] = 3;		tmp[3] = 4
			j++; 			// j = 1;			j = 2;			j = 3;			j=4;
		}
	}
	tmp[j] = arr[i];	// tmp[4] = 5; j++==> j = 5;
	j++;
	
	
	for(i=0; i<j; i++)//i<5;
	{
		printf("%d ", tmp[i]);
	}
	return 0;
	
}

{1, 2, 2, 3, 4, 4, 4, 5, 5};

	{1, 2, 3, 4, 5};


#include <stdio.h>
int main()
{
	int arr[9] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	int i,j=0,size;
	size = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0; i<size-1; i++) //0<8 			1<8			2<8			3<8			4<8 	5<8		6<8			7<8		8<8
	{
		if(arr[i] != arr[i+1])//1 != 2		2 != 2		2 != 3		3 !=4		4!=4	4!=4	4!=5		5 != 5
		{
			arr[j] = arr[i]; //arr[0] = 1; 				arr[1] = 2	arr[2] = 3;					arr[3] = 4
			j++; 			// j = 1;					j = 2;		j = 3;						j=4;
		}
	}
	arr[j] = arr[size-1];	// arr[4] = 5; j++==> j = 5;
	j++;
	
	
	for(i=0; i<j; i++)//i<5;
	{
		printf("%d ", arr[i]);
	}
	return 0;
	
}

#include <stdio.h>
int main()
{
	int arr[9] = {1, 4, 5, 3, 4, 4, 2, 5, 2};
	int i,j=0,k, n =9;
	
	for(i=0; i<n; i++) //0< 9	1<9		2<9				3<9		4<9
	{
		for(j=0; j<i;j++)	//0<0	0<1 1< 1	0<2	
		{
			if(arr[i] == arr[j]) //arr[4] == arr[2]
			{
				n--;
				for(k=i; k<n; k++) //k=4 4<8
				{
					arr[k] = arr[k+1]; //arr[4] = arr[5]	arr[5] = arr[6]	arr[6] = arr[7] 
				}
				i--;
			}
		}
	}
	
	for(k=0; k<n; k++)//i<5;
	{
		printf("%d ", arr[k]);
	}
	return 0;
	
}



#include <stdio.h>
int main()
{
	int arr[2];
	printf("%d", arr[3]);
	printf("%d", arr[-1]);

}hiiiDR

intHNJIW32V 



#define my_sizeof(x) ((char *) (&x + 1) - (char *)(&x)) //correct

int main()
{
	int a;
	printf("size of a is %d", my_sizeof(a));
	return 0;
}


// Online C compiler to run C program online
#include <stdio.h>    
#define my_sizeof(x) ((char *) (&x + 1) - (char *)(&x)) //correct
struct data
{
    int a;
    int b;
    int c;
};

int main()
{
	struct data x;
	printf("size of x is %d", my_sizeof(x));
	return 0;
}
