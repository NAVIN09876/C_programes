#include<stdio.h>

int bitwiseAnd(int a, int b) {
    return a & b;
}

int main()  
{
    /*64 32 16 8 4 2 1
      0  0  0  0 1 0 1  =5
      0  0  0  0 1 1 0  =6
      ====================
    & 0  0  0  0 1 0 0  =4
      ====================
    */

    int x=5; 
    int y=6;
    int z=bitwiseAnd(x, y);
    printf("%d",z);
}