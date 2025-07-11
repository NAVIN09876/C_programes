#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = malloc(sizeof(int) * 5);  // Allocate space for 5 integers
    // Accessing uninitialized memory
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];  // arr[i] is uninitialized!
    }
    printf("Sum = %d\n", sum);
    free(arr);
    return 0;
}

