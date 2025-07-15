#include <stdio.h>

int square(int x) {
    return x * x;
}

int (*get_function())(int) {
    return square;
}

int main() {
    int (*func_ptr)(int) = get_function();  // get the function pointer
    int result = func_ptr(5);               // call the function via pointer
    printf("Result: %d\n", result);         // Output: 25
    return 0;
}
