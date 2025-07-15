#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        printf("You entered: %s", str);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}