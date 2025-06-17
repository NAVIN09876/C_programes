strings:

int arr[] = {1,2,3,4,5};

char s1[] = {a, b, c, d, e}; //not valid

char s1[] = {'a', 'b', 'c', 'd', 'e'}; // s1 is only character array not string

char s2[] = {'a', 'b', 'c', 'd', 'e', '\0'};// s2 is character array and also a string



//Definition
char s2[] = {'a', 'b', 'c', 'd', 'e', '\0'};// s2 is character array and also a string

or
char s2[] = "abcde";//
 
or 
char *s3 = "abcde";//s3 is character pointer..

printf("%d %d %d", sizeof(s1), sizeof(s2), sizeof(s3));

s2[1] = *(s2 + 1);
#include <stdio.h>
int main()
{
	char name[20];
	printf("Enter string:");
	scanf("%s", name);
	
	printf("string is %s", str);
	return 0;
}


strlen();
strcpy();//strncpy();
strcat();//strncat();
strcmp();//strncmp();
strrev();
strchr();
strtok()
strstr();


strlen();

//to count or find length of a string

syntax:

typedef unsigned int size_t;


size_t strlen(const char *str);//int strlen(const char *str);

char *const str;

Ex:

char str[] = "hari";

//Using inbuilt function
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "hari";// {'h', 'a', 'r', 'i', '\0'};
	
	printf("string is %s\n", str);
	printf("%d %d ", sizeof(str), strlen(str));//5 4
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hari";
	
	printf("string is %s\n", str);
	printf("%d %d ", sizeof(str), strlen(str));//4(32 bit) or 8(64 bit), 4
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hari";
	
	if(sizeof(str) == 8)
	{
		printf("Machine is 64 bit");
	}
	else if(sizeof(str) == 4)
	{
		printf("Machine is 32 bit");
	
	}
}

//without Using inbuilt function(using character arry)
#include <stdio.h>
int main()
{
	char str[8] = "haritha";//7
	
	int length =0;
	for(int i=0; str[i] != '\0'; i++) //h != '\0' a != '\0'
	{
		length++; //length = 1	length = 2
	}

	printf("%d %d %d", sizeof(str), length, i);//8 7 7
	return 0;
}

#include <stdio.h>
int main()
{
	char str[] = "haritha";// {'h', 'a', 'r', 'i', '\0'};
	int length=0;
	while(str[length] != '\0')
	{
	    length++;
	}
	printf("string is %s\n", str);
	printf("%d %d ", sizeof(str), length);//
	return 0;
}


//without Using inbuilt function using pointer
#include <stdio.h>
int main()
{
	char *str =   "haritha";
	               1000 1001 1002	1003	1004	1005	1006	1007
					'h'  'a'  'r'    'i'     't'     'h'     'a'     '\0'
	char *s1 = str;//1000
	
	int length =0;
	while(*str != '\0') //'h' != '\0' 'a' != '\0'
	{
		length++; //length = 1	length = 2
		str++;//1001			1002
	}
	//str 1007

	printf("%s %d ", str, length);
	return 0;
}



strcpy();

//to copy a string

syntax:

char* strcpy(char *to, const char *from);
char* strcpy(char *dst, const char *src);

char* strncpy(char *dst, const char *src, int size);

Ex:

//Using inbuilt function
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[10] = "haritha";
	char str2[10];
	
	strcpy(str2, str1);
	
	printf("%s %s ", str1, str2);
	return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
	char str1[10] = "haritha";
	char str2[10];
	
	strncpy(str2, str1, 4);
	
	printf("%s %s ", str1, str2);
	return 0;
}

//without Using inbuilt function using array
#include <stdio.h>
int main()
{
	char str1[10] = "haritha";//definition
	char str2[10] = {0};//declaration
	int i=0;
	while(str1[i] != '\0')//h!= '\0' a != '\0'
	{
		str2[i] = str1[i];//str2[0] = 'h' 'a' 'r' 'i' 't' 'h' 'a'	'a'
		
		i++;//1	2	3	4	5 6	7
	}
	
	str2[i] = '\0';
	printf("%s %s ", str1, str2);
	return 0;
}


//without Using inbuilt function using pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str1 = "haritha";//1000 1001 1002	1003	1004	1005	1006	1007
							//h   a   r    i        t      h        a       '\0'
	char *str2 = (char *)malloc((strlen(str1) + 1) * sizeof(char)); //2000 to 2007
	
	//printf("%p %p ", str1, str2);
	char *s1 = str2; //s1 = 2000, str2 = 2000
	while(*str1 != '\0')//*1000, *1001
	{
		*str2 = *str1; //*2000 = *1000	*2001 = *1001
		str1++;//1001	1002
		str2++;//2001	2002
	}
	
	*str2 = '\0';//str2 = 2007
	printf("%s ", s1);
	return 0;
}

strcat();

//to concatinate a string to another string

syntax:

char* strcat(char *dst, const char *src);

Ex:

//Using inbuilt function
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[10] = "hi";
	char str2[10] = "hello";
	
	strcat(str2, str1);
	
	printf("%s %s ", str1, str2);
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	char source[10] = "hi";
	char destination[10] = "hello";
	
	strcat(destination, source);
	
	printf("%s %s ", source, destination);
	return 0;
}

//without Using inbuilt function using arrays
#include <stdio.h>
int main()
{
	char str1[10] = "hi";
	char str2[10] = "hello";
	int i=0, j=0;
	while(str2[i] != '\0')
	{
		i++;//1	2	3	4	5
	}
	while(str1[j] != '\0')
	{
		str2[i] = str1[j]; //str2[5] = str1[0]	str2[6] = str1[1];
		i++;//6		7	
		j++;//1		2
	}
	
	str2[i] = '\0';
	printf("%s %s ", str1, str2);
	return 0;
}


//without Using inbuilt function using pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str1 = "hi";
	char *str2 = "hello";
	char *s2;
	s2 = (char *)malloc( (strlen(str2) + strlen(str1) + 1) * sizeof(char));//5 + 2 + 1
	char *s1 = s2;
	//printf("%p %p ", str1, str2);
	while(*str2 != '\0')
	{
		*s2 = *str2;
		s2++;
		str2++;
	}

	while(*str1 != '\0')
	{
		*s2 = *str1;
		str1++;
		s2++;
	}
	
	*s2 = '\0';
	printf("%s ", s1);
	return 0;
}

//without Using inbuilt function using pointer
#include <stdio.h>
#include <stdlib.h>

char *string_copy(char *str2, char *str1)
{
	
	char *s2;
	s2 = (char *)malloc( sizeof(str2) + sizeof(str1) -1);
	char *s1 = s2;
	//printf("%p %p ", str1, str2);
	while(*str2 != '\0')
	{
		*s2 = *str2;
		s2++;
		str2++;
	}

	while(*str1 != '\0')
	{
		*s2 = *str1;
		str1++;
		s2++;
	}
	
	*s2 = '\0';
	return s1;
}
	
int main()
{
	char str1[10] = "hi";
	char str2[10] = "hello";
	char *s1 = string_copy(str2, str1);
	printf("%s ", s1);
	return 0;
}

strcmp();

//to compare two strings

syntax:

int strcmp(const char *str1, const char *str2);


will return 0 if both strings are equal
else will return asciI difference between the first unmatched characters
Ex:

//Using inbuilt function
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[10] = "haritha";
	char str2[10] = "harsitha";
	int rv = strcmp(str2, str1);//115-105
	if( rv == 0)
	{
		printf("both strings are equal");
	}
	else
	{
		printf("both strings are not equal %d", rv);
	}
	return 0;
}

//without Using inbuilt function
#include <stdio.h>
int main()
{
	//char str1[10] = "hari";
	//char str2[10] = "haritha";
	
	//char str1[10] = "haritha";
	//char str2[10] = "hari";
	
	//char str1[10] = "haritha";
	//char str2[10] = "hasitha";

    char str1[10] = "haritha";
	char str2[10] = "haritha";

	int i=0, flag =0;
	while(str1[i] != '\0' || str2[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			flag = 1;
			break;
		}
		else
		{
		    i++;
		}
	}
	
	if( flag == 0)
	{
		printf("both strings are equal");
	}
	else
	{
		printf("both strings are not equal");
	}
	return 0;
}


//without Using inbuilt function using pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str1 = "haritha";
	char *str2 = "harsitha";
	int flag =0;
	while(*str1 != '\0' || *str2 != '\0')
	{
		if(*str1 != *str2)
		{
			flag = 1;
			break;
		}
		else
		{
		    str1++;
			str2++;
		}
	}
	
	if( flag == 0)
	{
		printf("both strings are equal");
	}
	else
	{
		printf("both strings are not equal");
	}
	return 0;
}

char str1[10] = "hari";
char str2[10] = "haritha";

strcmp(str1, str2);

strncmp(str1, str2, strlen(str1));//strncmp(str1, str2, 4);

int strncmp(const char *dst, const char *src, int n);

strrev();

//to reverse a string

syntax:

char* strrev(char *str);

Ex:
//i/p: "haritha"
//o/p: "ahtirah";

//Using inbuilt function
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[10] = "haritha";
	
	printf("%s", strrev(str1));
	return 0;
}

//without Using inbuilt function
#include <stdio.h>
int main()
{
	char str1[10] = "haritha";
					"ahtirah"
	
	int i=0, j, length=0;
	while(str1[length] != '\0')
	{
		length++;//1	2	3	4	5	6	7
	}
	
	//j = strlen(str1) - 1;
	//length = 7;
	j = length-1;//6
	while(i < j)	//0<6				1<5		2<4 3<3
	{
											//str1[0] = 'h', str1[6] = 'a';	//str1[1] = 'a', str1[5] = 'h';	//str1[2] = 'r', str1[5] = 't';
		str1[i] = str1[i] ^ str1[j];//104 ^ 97 ==>9
		str1[j] = str1[i] ^ str1[j];//str1[6] = 'h';
		str1[i] = str1[i] ^ str1[j]; //str1[0] = 'a', str1[6] = 'h';	//str1[1] = 'h', str1[5] = 'a';	//str1[2] = 't', str1[4] = 'r';
		i++; // i = 1;	i= 2;	i = 3;
		j--; //j = 5;	j = 4; j = 3;
	}
	
	printf("%s ", str1); //"ahtirah";
	return 0;
}
//0110 1000(104)
//0110 0001(97)
^
//0000 1001(9)

//0000 1001(9)
//0110 0001(97)

^
//0110 1000(104)

//0000 1001(9)
//0110 1000(104)
^
//0110 0001(97)

O(n)

O(n/2)


a = str[i];
b = str[length];



//without Using inbuilt function using pointer
#include <stdio.h>
char *str = "haritha";
//str 1000	1001	1002	1003	1004	1005	1006	1007
		h 	  a       r       i       t       h       a     '\0'

void reverse_string(char *str)
{
	char *start;
	char *end= str;//1000
	while(*end != '\0')
	{
		end++;//1001	1002	1003	1004	1005	1006	1007
	}
	start = str; //1000
	end = end -1; //1006
	//1000	1001	1002	1003	1004	1005	1006	1007
//    h 	  a 	 r 		  i 	  t 	  h 	 a 		 \0
	while(start < end)//1000 < 1006	1001 < 1005		1002 < 1004	1003 < 1003
	{
		*start = *start ^ *end;
		*end = *start ^ *end;
		*start = *start ^ *end;
		
		start ++; //1001				1002			1003
		end --;//1005					1004			1003
	}
	return;
}	
	
int main()
{
	char str1[] = "haritha";
	
	reverse_string(str1);
	printf("%s ", str1);
	return 0;
}


#include <stdio.h>
int main()
{
	char str[100] = "How are you ";
	int count =0, i;
	for(i=0; str[i] != '\0'; i++)
	{
		if((i != 0) && (str[i] == ' ') && (str[i+1] != ' ' && str[i+1] != '\0'))
		{
			count++;
		}
	}
	printf("Number of words is %d", count+1);
	return 0;
}

#include <stdio.h>
int main()
{
	char str[100] = "How are you";
	int count =0, i=0;
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			count++;
			i++;
		}
	}
	printf("Number of words is %d", count+1);
	return 0;
}


#include <stdio.h>
int main()
{
	char str[100] = "How      are you ";
	int count =0, i=0;
	while(str[i] != '\0')
	{
		if((i != 0) && (str[i] == ' ') && (str[i+1] != ' ' && str[i+1] != '\0'))
		{
			count++;
			i++;
		}
	}
	printf("Number of words is %d", count+1);
	return 0;
}

char str[100] = "How are you";//3

char str[100] = " How are you";//3

char str[100] = "How  are you";

char str[100] = "How are you ";



char *str = "string"; vs char str[] = "string";

			
input: char str[] = "how are you";
output: "you are how";

#include <stdio.h>
void reverse_string(char *start, char *end)
{
	while( start < end)
	{
		*start = *start ^ *end;
		*end = *start ^ *end;
		*start = *start ^ *end;
		
		start ++;
		end --;
	}
}

void reverse_words(char str[])//"how are you";
{
	char *word_begin = str;//h
	char *ptr = str;//h
	while(*ptr != '\0')
	{
		ptr++;
		if(*ptr == '\0')
		{
			reverse_string(word_begin, ptr-1);//uoy
		}
		else if(*ptr == ' ')
		{
			reverse_string(word_begin, ptr-1);//woh	era 
			word_begin = ptr+1;
		}
	}
	reverse_string(str, ptr-1);//woh era uoy ====>you are how
}

int main()
{
	char str[] = "how are you";
	
	reverse_words(str);
	printf("%s", str);
	return 0;
}

//"how are you"  ==> "uoy era woh"
                 ==> "you are how"
#include <stdio.h>
void reverse_string(char *start, char *end)
{
	while( start < end)
	{
		*start = *start ^ *end;
		*end = *start ^ *end;
		*start = *start ^ *end;
		
		start ++;
		end --;
	}
}

void reverse_words(char str[])//"how are you"
{
	char *word_begin = str;
	char *ptr = str;
	char *p = ptr;
	while(*p != '\0')
	{
		p++;
	}
	p = p-1;
	reverse_string(str, p-1);// "uoy era woh"
	while(*ptr != '\0')
	{
		ptr++;
		if(*ptr == '\0')
		{
			reverse_string(word_begin, ptr-1);//uoy
		}
		else if(*ptr == ' ')
		{
			reverse_string(word_begin, ptr-1);//woh	era 
			word_begin = ptr+1;
		}
	}
}

int main()
{
	char str[] = "how are you";
	
	reverse_words(str);
	printf("%s", str);
	return 0;
}

//without Using inbuilt function
#include <stdio.h>
int main()
{
	char str1[10] = "madam";
	int i=0, j, length=0;
	while(str1[length] != '\0')
	{
		length++;
	}
	
	j = length-1;//6
	while(i<j)
	{
	    if(str1[i] != str1[j])
	    {
	        printf("String is not polindrome");
	        return 0;
	    }
	    i++;
	    j--;
	}
	printf("String is polindrome");
	return 0;
}