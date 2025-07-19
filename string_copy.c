/*Copy one string to another without using strcpy().*/
#include <stdio.h>
#include <string.h>
int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin); // Read string including spaces

    // Copying string manually
    int i = 0;
    while (source[i] != '\0' && source[i] != '\n') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string

    printf("Copied string: %s", destination);
    return 0;
} 