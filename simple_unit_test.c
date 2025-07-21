/*"Write a function that returns the maximum of two integers and test it using unit testing."*/
#include<stdio.h>
#include <assert.h>
int max_find(int a, int b)
{
    return a>b?a:b;
}
void test_max_find()
{
    assert(max_find(10, 20) == 20);
    assert(max_find(20, 10) == 20);
    assert(max_find(-10, -20) == -10);
    assert(max_find(-20, -10) == -10);
    assert(max_find(0, 0) == 0);
    assert(max_find(100, 100) == 100);

}
int main()
{
    test_max_find();
    printf("All tests passed!\n");
    return 0;
}
