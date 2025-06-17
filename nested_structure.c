#include <stdio.h>

// Define a nested structure
struct Address {
    char city[50];
    int pincode;
};

struct Employee {
    char name[100];
    int age;
    struct Address addr;  // Nested structure //typedef
};

int main() {
    struct Employee emp;

    // Input
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter age: ");
    scanf("%d", &emp.age);

    getchar(); // clear newline
    printf("Enter city: ");
    scanf(" %[^\n]", emp.addr.city);

    printf("Enter pincode: ");
    scanf("%d", &emp.addr.pincode);

    // Output
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", emp.name);
    printf("Age    : %d\n", emp.age);
    printf("City   : %s\n", emp.addr.city);
    printf("Pincode: %d\n", emp.addr.pincode);

    return 0;
}
