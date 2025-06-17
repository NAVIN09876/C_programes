#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char *name;  // pointer to string
};

int main() {
    struct Student s1;
    s1.id = 101;

    s1.name = (char *)malloc(50 * sizeof(char));//dynamic memory allocation for structure variablw 
    if (s1.name == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter student name: ");
    scanf(" %[^\n]", s1.name);

    printf("ID: %d, Name: %s\n", s1.id, s1.name);

    free(s1.name);  // free dynamically allocated memory
    return 0;
}