//Write a program to compare two numbers and print the greater one.
#include <stdio.h>
int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The greater number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The greater number is: %d\n", num2);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }

    return 0;
}