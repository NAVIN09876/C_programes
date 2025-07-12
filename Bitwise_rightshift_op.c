#include<stdio.h>
int main()
{
    /*64 32 16 8 4 2 1
       0  0  0 1 0 1 0  =10
10>>1  0  0  0 0 1 0 1  =5
10>>2  0  0  0 0 0 1 0  =2
10>>3  0  0  0 0 0 0 1  =1     
       */
    int x,y;
    printf("Enter x value :");
    scanf("%d",&x);
    printf("Enter position :");
    scanf("%d",&y);
    int z=x>>y;
    printf("After left shift %d >> %d = %d",x,y,z);

}