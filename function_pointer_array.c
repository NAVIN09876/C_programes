#include <stdio.h>

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return b != 0 ? a / b : 0; // Basic divide with zero check
}

int main() {
    int choice, a = 20, b = 5;
    

    // Array of function pointers
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};

    printf("Choose operation:\n");
    printf("0. Add\n1. Subtract\n2. Multiply\n3. Divide\n");
    printf("Enter choice (0–3): ");
    scanf("%d", &choice);

    
    if (choice >= 0 && choice < 4) {
        int result = operations[choice](a, b);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
// This code demonstrates the use of function pointers in an array to perform basic arithmetic operations.  It allows the user to select an operation and see the result based on predefined functions. The code is written in C and adheres to the C17 standard.
// The program includes basic error handling for division by zero and checks for valid user input.
// The function pointer array allows for a clean and efficient way to call different operations based on user input.
// The code is structured to be simple and easy to understand, making it suitable for educational purposes.
// The program is designed to be compiled with a C17 compliant compiler.
