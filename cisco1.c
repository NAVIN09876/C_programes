#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 1024

// Function to check if a character is a vowel
bool is_vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// Function to remove vowels and extra spaces
void remove_vowels(char* input, char* output) {
    int j = 0;
    bool prev_space = false;

    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];

        if (is_vowel(c)) {
            continue;
        }

        if (c == ' ') {
            if (!prev_space && j > 0) {
                output[j++] = ' ';
                prev_space = true;
            }
        } else {
            output[j++] = c;
            prev_space = false;
        }
    }

    // Remove trailing space, if any
    if (j > 0 && output[j - 1] == ' ') {
        j--;
    }

    output[j] = '\0';
}

int main() {
    char input[MAX_LEN];
    char output[MAX_LEN];

    printf("Enter a string: ");
    fgets(input, MAX_LEN, stdin);

    // Remove trailing newline from fgets
    input[strcspn(input, "\n")] = '\0';

    remove_vowels(input, output);

    printf("Output: \"%s\"\n", output);

    return 0;
}
