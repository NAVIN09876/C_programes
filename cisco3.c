#include <stdio.h>
#include <string.h>

/**
 * @brief Finds the maximum of two integers.
 * @param a The first integer.
 * @param b The second integer.
 * @return The larger of the two integers.
 */
int max(int a, int b) {
    return (a > b) ? a : b;
}

/**
 * @brief Calculates the length of the longest substring without repeating characters.
 *
 * This function uses the sliding window technique. It maintains a "window"
 * (a substring) and expands it to the right. If a repeating character is found,
 * the left side of the window is moved to the right of the last occurrence of that
 * character. Repetition of space characters is ignored as per the requirement.
 *
 * @param s The input string.
 * @return The length of the longest substring without repeating characters.
 */
int lengthOfLongestSubstring(char* s) {
    // Get the total length of the input string.
    int n = strlen(s);
    if (n == 0) {
        return 0;
    }

    int maxLength = 0;
    int start = 0; // The starting index of the current sliding window.
    
    // lastSeen array stores the last index where a character was seen.
    // We initialize it to -1 to indicate no characters have been seen yet.
    // The size 256 covers all possible ASCII characters.
    int lastSeen[256]; 
    memset(lastSeen, -1, sizeof(lastSeen));

    // Iterate through the string with the 'end' pointer of the window.
    for (int end = 0; end < n; end++) {
        char currentChar = s[end];

        // We only check for repetitions of non-space characters.
        // If the current character was already seen within our current window
        // (i.e., its last seen index is at or after our window's start)...
        if (currentChar != ' ' && lastSeen[currentChar] >= start) {
            // ...then we must shrink the window from the left.
            // The new start is the index right after the last time we saw this character.
            start = lastSeen[currentChar] + 1;
        }

        // If the character is not a space, update its last seen position to the current index.
        if (currentChar != ' ') {
            lastSeen[currentChar] = end;
        }

        // The length of the current valid substring is (end - start + 1).
        // We update our overall maxLength if this window is the longest so far.
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

/**
 * @brief Main function to drive the program.
 * * It reads a line of text from the user, calls the function to find the
 * length of the longest substring, and prints the result.
 */
int main() {
    // Define a buffer to hold the input string. 
    // Size 1025 to accommodate 1024 characters plus the null terminator.
    char str[1025];

    printf("Enter a string: ");
    
    // Read a full line of input from the user, including spaces.
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // fgets includes the trailing newline character ('\n').
        // We find it and replace it with a null terminator to properly end the string.
        str[strcspn(str, "\n")] = 0;

        // Call the function and get the length.
        int length = lengthOfLongestSubstring(str);

        // Print the final result.
        printf("Length of the longest substring: %d\n", length);
    }

    return 0;
}