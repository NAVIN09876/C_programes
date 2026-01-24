#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name = malloc(20);     // Allocated memory
    strcpy(name, "Navin Kumar");

    printf("Hello, %s!\n", name);


    return 0;
}
