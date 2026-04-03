#include<stdio.h>
//print binary format of a number
void print_Binary(int x)
{
    int n=31;
    while(n>=0)
    {
        int bit = (x>>n) & 1;
        printf("%d",bit);
        n--;
    }
    printf("\n");

}
//set bit for a given posotion
void set_bit(int x,int pos)
{
    printf("Before set bit\n");
    print_Binary(x);
    int res = x|(1<<pos);
    printf("After set bit\n");
    print_Binary(res);

}
//unset bit for a given posotion
void unset_bit(int x,int pos)
{
    int res = x & ~(1<<pos);
    printf("After unset bit\n");
    print_Binary(res);

}
//toggle bit for a given posotion
void toggle_bit(int x,int pos)
{
    ;
    int res = x^(1<<pos);
    printf("After toggling bit\n");
    print_Binary(res);

}
//check even or odd of given number
void given_num_even_or_odd(int x)
{
    if(x&1)
    {
        printf("%d is odd number\n",x);
    }
    else{
        printf("%d is even number\n",x);
    }
}
//check given number is power of two or not
void given_number_is_power_of_two(int x)
{
    if(x&(x-1))
    {
        printf("%d is not power of two number\n",x);
    }
    else{
        printf("%d is power of two number\n",x);
    }
}
// check your machine is 32 or 64
void find_machine_bit(void)
{
    int *ptr=NULL;
    if(sizeof(ptr)==4)
    {
        printf("Your Machine is 32 bit machien\n");
    }
    else if(sizeof(ptr)==8)
    {
        printf("Your Machine is 64 bit machien\n");
    }
}
//swap of two numbers
void swap_numbers(int x,int y)
{
    printf("Before swaping \nx=%d Y=%d\n",x,y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After swaping \nx=%d Y=%d\n",x,y);
}
//check little endian or big endian machine
void littleendian_or_bigendian()
{
    int x=1;
    char *ptr = (char*)&x;
    if(*ptr)
    {
        printf("Your Machine Little endian Machine\n");
    }
    else{
        printf("Your Machine Big endian Machine\n");
        
    }
}
//
void convert_little_to_big(void)
{
    unsigned int x= 0X12345678;
    printf("0X%x\n", x);
    x = (x << 24 & 0xff000000)|
        (x << 8  & 0x00ff0000) |
        (x >> 8  & 0x0000ff00) |
        (x >> 24 & 0x000000ff);

    printf("0X%x\n", x);
}
//
void find_set_bits_in_a_given_number(int x)
{
    int n=32;
    int count=0;
    while(n>=0)
    {
        int bit = (x>>n) & 1;
        if(bit)
        {
            count++;
        }
        n--;
    }
    int off_count = sizeof(int)*8 - count;
    printf("set bit count:%d\n",count);
    printf("set bit count:%d\n",off_count);
}
void swap_or_replace_bits(int n,int p1,int p2)
{
    printf("Before swaping two bits\n");
    print_Binary(n);
    if(((n & (1<< p1)) >> p1) ^  ((n & (1<<p2)) >> p2))
	{
		n = n ^ (1<<p1);
		n = n ^ (1<<p2);
	}
    printf("After swaping two bits\n");
    print_Binary(n);
}

int main()
{
    int x=10;
    int pos= 2;
    set_bit(x,pos);
    unset_bit(x,pos);
    given_num_even_or_odd(x);
    given_number_is_power_of_two(x);
    swap_numbers(10,11);
    find_machine_bit();
    littleendian_or_bigendian();
    convert_little_to_big();
    find_set_bits_in_a_given_number(10);
    swap_or_replace_bits(10,0,1);

}