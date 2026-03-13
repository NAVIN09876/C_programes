#include<stdio.h>
int binary_representation(int n)
{
    for(int i=31;i>=0;i--)
    {
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}
int set_bit(int n,int pos)
{
    int s = n|(1<<pos);
    printf("set_bit= %d\n",s);
}
int un_set_bit(int n,int pos)
{
    int s = n & ~(1<<pos);
    printf("un_set_bit=%d\n",s); 
}
int toggle_bit(int n,int pos)
{
    int s = n^(1<<pos);
    printf("toggle_bit=%d\n",s);
}
int test_a_bit(int num, int pos)
{
    int bit = (num>>pos)&1;
    if(bit)
    {
        printf("The bit is 1\n");
    }
    else{
        printf("The bit is 0\n");

    }
}
int count_bit_in_number(int n)
{
     int count=0;
    while(n)
    {
        count++;
        n=n&(n-1);
    }
    int off_count = 8*sizeof(int)-count;
    printf("number of bit in a given number =%d\n",count);

}

int main()
 {
    binary_representation(10);
    set_bit(10,0);
    un_set_bit(10,1);
    toggle_bit(10,0);
    test_a_bit(10,1);
    count_bit_in_number(10);  
}