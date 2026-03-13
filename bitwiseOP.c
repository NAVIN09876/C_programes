#include<stdio.h>
int set_bit(int n , int pos)
{
    return n|(1<<pos);

}
int unset_bit(int n , int pos)
{
    return n&(~(1<<pos));

}
int toggle_bit(int n , int pos)
{
    return n^(1<<pos);

}





int main()
{
    int result =   set_bit(10,0);
    int result1 =  unset_bit(10,1);
    int result2 =  toggle_bit(10,0);

    
    printf("%d\n",result);
}