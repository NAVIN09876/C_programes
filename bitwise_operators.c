Bitwise opearators:
1. Bitwise operators
2. Truth tables
3. Truth statements
4. Basic programs
5. Little and Big Endian Machine and their conversions


Bitwise AND(&)

Bitwise OR (|)

Xor( ^ )

inversion(~)

left shift (<<)

right shift(>>)


a	b 		a | b 	a & b 		a ^ b

0	0		  0		  0			  0

0	1		  1       0			  1

1	0		  1		  0			  1

1	1		  1		  1			  0




a	b	c 		a | b | c 	a & b & c 		a ^ b ^ c

0	0	0		  0		  		0			  0

0	0	1		  1       		0			  1

0	1	0		  1		  		0			  1

0	1	1		  1		  		0			  0

1	0	0		  1		  		0			  1

1	0	1		  1       		0			  0

1	1	0		  1		  		0			  0

1	1	1		  1		  		1			  1




1   1   1   1

128		64		32		16		8		4		2		1
	100(10
  10000

int x = 10 //00000000 00000000 00000000 00001010
~x =       //11111111 11111111 11111111 11110101

<<

x = 10;
	0000 1010
   00001 0100(20)
    0001 0100
   00010 1000(40)
    0010 1000
   00101 0000(80)
   
   123 * 10
  1230 
 12300 (123 * 10^2)
  

x = x << pos-==> x = x * 2^pos;

   123 			/ 10
   012 
   
a=123;//123/10===>12
	123
	012
x = 10;

x = x>>1; //5

	0000 1010
	0000 0101 //5/2
	
	0000 0010 //2
	
x = x >> pos==> x = x / 2^pos;

x = 120;  120/2^4==>120/16==>7

	0111 1000	(120) >> 1
	0011 1100	(60)  >> 1
	0001 1110   (30)  >> 1
	0000 1111   (15)  >> 1
	0000 0111   (7)

   


x = x <<1;//20
x = x <<1;



>>


Bitwise truth statements:

x | 0 	= x 
x | 1 	= 1
x | x 	= x 
x | x' 	= 1


x & 0	= 0
x & 1	= x 
x & x 	= x 
x & x'	= 0

x ^ 0	= x 
x ^ 1	= x'
x ^ x 	= 0
x ^ x'	= 1

x | 0 	= x 
x | 1 	= 1

x & 0	= 0
x & 1	= x 

x ^ 0	= x 
x ^ 1	= x'

o/p:	0000 000X

		0001 1010(26)

        0000 0001
	&
o/p:	0000 0000
Programs:

256 128	64	32	16	8	4	2	1

int x = 35;

00000000	00000000	00000000	00100011

00000000 	00000000	00000000	00000000
00000000	00000000	00000000	00000001
&
00000000 	00000000	00000000	00000000

int n = 10;
00000000 00000000 00000000 00001010

pos = 3
n = n | (1<<pos);
n = n & ~(1<<pos);
n = n ^ (1<<pos);

if(n & (1<<pos))



1. Binary representaion of given number
2. Set/unset/toggle/test a bit at given position of a number
3. Find number of set bits in given number
4. Swap two numbers using bitwise operator
5. Find given number is even or odd using bitwise opearator
6. Find given number is power of 2 or not
7. Replace/Swap the bits at given pos1 to pos2 in given number
8. Replace the bits between two given position with 0s or 1s or toggle
9. Find the given machine is little endian or big endian
10. Convert liitle endian machine to big endian machine or vice versa
11. Nibble swapping


00000000 00000000 00000000 00000001
00000000 00000000 00000000 00000010
10000000 00000000 00000000 00000000

1st itteration:
00000000	00000000	00000000	00100011

10000000	00000000	00000000	00000000

00000000	00000000	00000000	00000000

2nd itteration:
00000000	00000000	00000000	00100011

01000000	00000000	00000000	00000000

00000000	00000000	00000000	00000000

Last itteration:

00000000	00000000	00000000	00100011

00000000	00000000	00000000	00000001

00000000	00000000	00000000	00000001


0000


01000000	00000000	00000000	00000000



0 to 2^32 -1

-2^31 to 0 to 2^31 - 1

0 to 255 (256)










	
//Swapping Using bitwise opeator

//i/p: a = 10, b=20;
//o/p: a = 20, b=10;

#include <stdio.h>
void swap(int a, int b)// a=10, b=20
{
	a = a^b; //a = 30;
	b = a^b; //b = 10;
	a = a^b; //a = 20;
	printf("\n a is %d, b is %d", a, b); // a is 20, b is 10
	return;
}

a 	0000 1010(10)
b 	0001 0100(20)
^
a 	0001 1110(30)

a 	0001 1110(30)
b 	0001 0100(20)
^
b 	0000 1010(10)

a 	0001 1110(30)
b 	0000 1010(10)
^
a 	0001 0100(20)

(1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096)

00000000 00000000 00000001 00000000
00000000 00000000 00000000 11111111
00000000 00000000 00000000 00000000(0)

00000000 00000000 00010000 00000000

00000000 00000000 00000010 00000000

00000000 00000000 00000001 00000001(257)
00000000 00000000 00000001 00000000(256)

00000000 00000000 00000001 00000000(256)


0001 0000(n = 16)
0000 1111(n-1 = 15)


0000 0000 (0)

1000 0000(128)
0111 1111(127)

0000 0000 (0)

0001 0000
0000 0001

0000 0000

0001 0100
0000 0001
0000 0000

//To find given number is power of 2 or not
#include <stdio.h>
int main()
{
	int x = 16;
	if(x & (x-1))//16>0
	{
		printf("Given number is not power of 2");
	}
	else
	{
		printf("Given number is power of 2");
	}
}

x=16

0001 0000(16)
0000 1111(15)
=============
0000 0000(0)


x = 20

0001 0100(20)

0001 0011(19)
--------------
0001 0000(16)
--------------

x = 32

0010 0000(32)

0001 1111(31)
--------------
0000 0000(0)
--------------


//To find given number is even or odd
#include <stdio.h>
int main()
{
	int x = 16;
	if(x %2 == 0)
	{
		printf("Given number is even");
	}
	else
	{
		printf("Given number is odd");
	}
	return 0;
}

//with using bitwise operator
0000 000x

0001 0000
0000 0001

0000 0000(0)
#include <stdio.h>
int main()
{
	int x = 16;
	if(x & 1) //1 > 0
	{
		printf("Given number is odd");
	}
	else
	{
		printf("Given number is even");
	}
}

(1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096 ......2^31)
111
1010

even + even = even
even + 1 = odd
even + 0 = even

77

0100 1101
0000 0001
0000 0001(1)
0000 000x

0010 0011
0000 0001
---------
0000 000x(1)

0	0	1	0 	0	0	1	1(35)
128	64	32	16	8	4	2	1

2^7	2^6	2^5	264	2^3	2^2	2^1	2^0


0	0	1	0 	0	0	1	0(34)
128	64	32	16	8	4	2	1

(0100 1101)(77)
(0100 1100)(76)
0

0010 0010(34)


0001 1000(24)
0000 0001(1)
0000 0000(0)

0001 0111(23)
0000 0001(1)
0000 0001(1)


0001 0001(17)
0000 0001(1)

0000 0001

int n = 25, pos = 5;

00000000	00000000	00000000	00011001

00000000	00000000	00000000	00010000(1<<pos)

|
32 bits(0 to 31)
00000000 	00000000	00000000	00011001

int n = 25, pos = 1;

00000000	00000000	00000000	00011001

00000000	00000000	00000000	00000010

|

00000000 	00000000	00000000	00011011

00000000	00000000	00000000	00000001(1<<4)

00000000	00000000	00000000	00010000(1<<pos)

set(bitwise OR(|) with mask 1<<pos)

unset/clear(bitwise AND(&) with mask as ~(1<<pos))

toggle(bitwise xor (^) with mask as 1<<pos)

test(bitwiseAND(&) with mask 1<<pos)



i/p:n=31,pos=4
xxxx xxxx(0001 1111)(pos = 4)
0001 0000(1<<pos)
|
xxx1 xxxx
1==>   0000 0001
1<<4==>0001 0000

o/p: 
xxx1 xxxx(0001 1111)

i/p:
xxxx xxxx(0001 1111)(pos=6)
		  0100 0000
o/p: 
x1xx xxxx(0101 1111)

//To set the bit at given position in given number

int set_bit_at_given_pos(int n, int pos)
{
	return (n | (1 << pos));
}

xxx1 xxxx ==> OR operator


0000 0001 	1
0000 0010	1<<1
0000 0100	1<<2
0000 1000	1<<3
0001 0000	1<<4


int n = 15, pos = 4;
0000 1111
|
0001 0000
---------
0001 1111(31)


int n = 15, pos = 3;
0000 1111
|
0000 1000
---------
0000 1111(15)

int n = 15, pos = 6;
0000 1111
|
0100 0000
---------
0100 1111 (79)

int n = 14, pos = 0;
0000 1110
|
0000 0001
---------
0000 1111 (15)

//To unset/clear the bit at given position of a number

xxxx xxxx
1110 1111==>~(1<<pos)

&
xxx0 xxxx

int unset_bit_at_given_pos(int n, int pos)
{
	n = n & ~(1 << pos);
	return n;
}

i/P: XXXX XXXX
o/p: XXXX 0XXX ==> AND operator

1<<3 
0000 0001
0000 1000

~(1<<3)
1111 0111

int n = 15, pos = 3;
0000 1111
&
1111 0111
---------
0000 0111(7)


int n = 15, pos = 4;
0000 1111
&
1110 1111
---------
0000 1111(15)

int n = 15, pos = 6;

0000 1111
&
1011 1111
---------
0000 1111(15)

i/p: xxxx xxxx
o/p: xxxx x'xxx ==> XOR operator


//To toggle/invert the bit at given position of a number

int toggle_bit_at_given_pos(unsigned int n, int pos)
{
	n = n ^ (1 << pos);
	return n;
}


int n = 15, pos = 3;
0000 1111
^
0000 1000
---------
0000 0111(7)


int n = 15, pos = 4;
0000 1111
^
0001 0000(1<<4)
---------
0001 1111(31)

int n = 15, pos = 6;
0000 1111
^
0100 0000
---------
0100 1111(79)

if(n & (1<<0))===>(n & 1)
	

//To test the bit at given position of a number
//000x 0000
bool is_bit_set_at_given_pos(unsigned int n, int pos)
{

	//n = n & (1<<pos);
	if(n & (1<<pos))
	{
		printf("Bit is 1 at the given position");
		return true;
	}
	else
	{
		printf("Bit is 0 at the given position");
		return false;
	}
}
i/p: xxxx xxxx
conditional o/p: 000X 0000 ==> AND operator(0000 0000 or 0001 0000)

int n = 15, pos = 4;
0000 1111
&
0001 0000
---------
0000 0000(0)


int n = 15, pos = 3;
0000 1111
&
0000 1000
---------
0000 1000(8) 8>0

int n = 15, pos = 6;
0000 1111
&
0100 0000
---------
0000 0000 (0)

//Find number set bits in given number
int n = 127;
0000 0000	0000 0000	0000 0000	0111 1111       

int n = 23;

00000000 00000000 00000000 00010111

int find_set_bits_in_given_number(int n)
{
	int on_count=0, off_count =0;
	while(n)//n>0 if not(n <= 0)//23>0			22>0			20>0			16>0			0>0
	{
		on_count++;				//on_count = 1; on_count = 2	on_count = 3	on_count = 4
		n = n & (n-1); 			//n = 22		n = 20			n = 16			n =0
	}
	off_count = 8 * sizeof(n) - on_count;//28
	return on_count;
}

int find_set_bits_in_given_number(int n)//23
{
	int on_count=0;
	while(n)//n>0 if not(n <= 0)//23>0			22>0			20>0			16>0			0>0
	{
		on_count++;				//on_count = 1; on_count = 2	on_count = 3	on_count = 4
		n = n & (n-1); 			//n = 22		n = 20			n = 16			n =0
	}
	return on_count;
}

int n =1;
00000000 00000000 00000000 00000001

int n = 23;
MSB		LSB
0001 0111
0001 0110
&
0001 0110 (22)

0001 0101

&
0001 0100(20)

0001 0011
&
0001 0000(16)
0000 1111
&
0000 0000(0)

int find_set_bits_in_given_number(int n)
{
	int on_count=0, off_count =0;
	while(n)// 			23 >0			22 >0		20>0			16 >0	0>0
	{
		on_count++;//	on_count = 1; on_count=2;	on_count=3;		on_count = 4
		n = n & (n-1);//n = 22;			n = 20		n = 16 			n = 0;
	}
	//off-count = 8 * sizeof(int) - on_count;
	return on_count;
}

0001 0111


0001 0110

0001 0100

0001 0000

0000 0000

n = 32

00000000 00000000 00000000 00100000

00000000 00000000 00000000 00100000(32)
&
00000000 00000000 00000000 00011111(31)

00000000 00000000 00000000 00000000(0)


int find_set_bits_in_given_number(unsigned int n)
{
	int count=0;
	while(n);//n>0 if not(n <= 0)
	{
		count++;	//count = 1;
		n = n & (n-1);
	}
	return count;
}

int x = 10;
00000000000000000000000000001010

//Binary representation of given number
void print_binary (int n)
{
	int i, bit;
	for(i=31; i>=0; i--)
	{
		bit = n>>i;
		if(bit & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	return;
}
00000000000000000000000000010100
00000000000000000000000000001010
00000000000000000000000000000101
00000000000000000000000000000010
00000000000000000000000000000001
00000000000000000000000000000000

00000000	00000000	00000000	00100011
void print_in_binary(int n)
{
	unsigned int i;
	//00000000000000000000000000000001
	//10000000000000000000000000000000
	  //00000000000000000000000000001010
	for(i = 1<<31; i>0; i = i/2)//i = i/2  ====> i>>1;//01000000000000000000000000000000
	{
		(n & i) ? printf("1") : printf("0");
	}
	return;
}



int x = 10;//00000000	00000000	00000000	00001010(0x00 00 00 0a)
int *ptr = &x;(ptr is pointing 1000)

int x = 1; //1003 			1002 			1001 			1000
			00000000		00000000		00000000		00000001
			or
			00000001		00000000		00000000		00000000
char ch = '1'; 1000

//0x12345678


MSB										LSB

00000000	00000000	00000000	00001010

int x = 10; //0x00 00 00 0a

int *ptr = &x;
1003			1002				1001				1000    //Little endian
 00				 00				  	 00				 	 0a


1003			1002				1001				1000    //Big endian
 0a				 00				  	 00				 	 00


int x = 0x12345678; //0x12 34 56 78

00010010 00110100 01010110 01111000

1003			1002				1001				1000    //Little endian
 12				 34				  	 56				 	 78


1003			1002				1001				1000    //Big endian
 78				 56				  	 34				 	 12


#include <stdio.h>
int main()
{
	int x = 1; 	//1003 			1002			1001			1000
				//00000000		00000000		00000000		00000001(0x00 00 00 01)
	char *ptr = (char *)&x;//1000
	if(*ptr)//(*(&x))//1000
	{
		printf("Machine is Little endian");
	}
	else
	{
		printf("Machine is Big endian");
	}
	return 0;
}

int x = 1; // &x is 4 bytes 1000, 1001, 1002, 1003
//after ptr assignment, due to type casting ptr will be 1 byte i.e 1000


MSB									LSB

00000000	00000000	00000000	00000001
int x = 1; //0x00 00 00 01

1003			1002				1001				1000    //Little endian
 00				 00				  	 00				 	 01


1003			1002				1001				1000    //Big endian
 01				 00				  	 00				 	 00


	1011
   10110000000000000000

		0x12		34			56			78
		//00010010	00110100	01010110	01111000<<1
		//00100100  01101000    10101100    11110000<<1
		//01001000  11010001    01011001    11100000<<1
		//10010001  10100010    10110011    11000000<<1
		//00100011  01000101    01100111    10000000<<1
		//01000110  10001010    11001111    00000000<<1
		//10001101  00010101    10011110    00000000<<1
		//00011010  00101011    00111100    00000000<<1
		
		
		//00110100  01010110    01111000    00000000 <<8
		//01010110  01111000    00000000    00000000 <<8
		//01111000  00000000    00000000    00000000
		//0x78      00           00         00
		
#include <stdio.h>
int main()
{
	  int x = 0x12	34		56		78;
	
	
	//int x = 0x78	56		34		12; 
	
	
	//00010010	00110100	01010110	01111000
	x = (x << 24 & 0xff000000) | (x << 8 & 0x00ff0000) | (x >> 8 & 0x0000ff00) | (x >> 24 & 0x000000ff);
	    //0x780000000				0x00560000       		0x00003400				0x00000012
	return 0;
}
0x12 34 56 78

//01111000	00000000	00000000	0000000(x<<24)(0x78 00 00 00)
//11111111	00000000	00000000	0000000(0xff00000000)
//01111000	00000000	00000000	00000000(0x78 00 00 00)

			00010010  00110100    01010110    01111000
		   000100100  01101000    10101100    1111000
  
//00110100  01010110    01111000    00000000 <<8
//00110100	01010110	01111000	0000000(x<<8)(0x34 56 78 00)
//00000000	11111111	00000000	0000000(0x00ff0000)
//00000000	01010110	00000000	00000000(0x00 56 00 00)

//00000000	00010010	00110100	01010110(x>>8)(0x 00 12 34 56)
//00000000	00000000	11111111	0000000(0x0000ff00)
//00000000	00000000	00110100	00000000(0x00 00 34 00)

//00000000	00000000	00000000	00010010(x>>24)(0x00 00 00 12)
//00000000	00000000	00000000	11111111(0x000000ff)
//00000000	00000000	00000000	00010010(0x00 00 00 12)


//01111000	00000000	00000000	00000000(0x78 00 00 00)
//00000000	01010110	00000000	00000000(0x00 56 00 00)
//00000000	00000000	00110100	00000000(0x00 00 34 00)
//00000000	00000000	00000000	00010010(0x00 00 00 12)

//01111000	01010110	00110100	00010010(0x78 56 34 12)
//x = 0x78 56 34 12

byte(8 bits)
//swapping nibble(4 bits)

i/p:
1010 0101
n=				1010 0101
           1 	0100 1010
		        1001 0100
				0010 1000
				0101 0000

n<<4 ===> 0101 0000
n>>4 ===> 0000 1010
		  0101 1010

o/p:
0101 1010

n = ( n<<4 & 0xf0) | (n>>4 & 0x0f);

0101 0000			0000 1010
1111 0000			0000 1111

0101 0000			0000 1010

0101 0000
0000 1010

0101 1010

int Multiply_by_two(int n)
{
	n = n << 1; (n = n * 2^1 = n * 2)
	return n;
}

int Multiply_by_four(int n)
{
	n = n << 2; //( 4 * n)
	return n;
}

int Multiply_by_eight(int n)
{
	n = n << 3; //(8 * n)
	return n;
}


int Multiply_by_eight(int n)
{
	n = n << 3; //(8 * n)
	return n;
}

int Multiply_by_seven(int n)
{
	n = (n << 3) - n; //(8 * n - n) = 7n
	return n;
}

int Multiply_by_six(int n)
{
	n = (n << 3) - (n<<1) ; //(8 * n) - (2 * n) = 6n
	return n;
}

source ip: 10.0.0.1(host byte or liitle endian)

when it reaches router it will process as 1.0.0.10(because network byte order or big endian)

Host1------->router------->host2

htons
ntohs
hton
ntoh
htonl
ntohl


i/p: 0001 1001 //p1 = 2, p2=4
o/p: 0000 1101


i/p: 0001 1001//p1 =3, p2=4
o/p: 0001 1001

i/p: 0001 1001//p1 =2, p2=5
o/p: 0001 1001

i/p: 0001 1001 //p1 = 3, p2=5
o/p: 0011 0101


0001 1001
0011 0010
0110 0100

1100 1000
0001 1001
0000 1000

0000 0001


0001 1001
0011 0010
0110 0100
1100 1000
1001 0000

0010 0000
0001 1001
0000 0000 >>5

0000 0000


int swap_or_replace_bits(int n, int p1, int p2)//n = 25, p1 = 2, p2=4
{
	if((n & (1<< p1)) >> p1) ^ ((n & (1<<p2)) >> p2)) //0 ^ 1
	{
		n = n ^ (1<<p1);
		n = n ^ (1<<p2);
	}
	return n;
}

int swap_or_replace_bits(int n, int p1, int p2)//n = 25, p1 = 2, p2=4
{
	for(int i=p1; i<=p2; i++)
	{
		n = n | 1<<i;//set all bits between p1 and p2
		n = n & ~(1<<i);//unset all bits between p1 and p2
		n = n ^ 1<<i;//toggle all bits between p1 and p2
	}
	return n;
}

//1<<p1(2)

0000 0001
0000 0100


0001 1001
0000 0100
&
0000 0000 >> 2
0000 0000


0000 0001
0001 0000


0001 1001
0001 0000
0001 0000 >> 4

0000 0001

x = (x & 0xff0000ff) | (x << 8 & 0x00ff0000) | (x >> 8 & 0x0000ff00);

x = (x << 24 & 0xff000000) | (x  & 0x00ffff0000) | (x >> 24 & 0x000000ff);