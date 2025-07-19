/*Count the length of a string without using strlen().*/
#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string including spaces
    // Calculate length without using strlen()
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}