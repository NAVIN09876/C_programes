#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
int parse_int(char*);

// Binary Search Helper Function
int binarySearch(int* tail, int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (tail[mid] >= key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left;
}

// Main Function to Find Longest Increasing Subsequence Length
int longestSubsequenceLength(int nums_count, int* nums) {
    if (nums_count == 0) return 0;

    int* tail = (int*)malloc(nums_count * sizeof(int));
    int length = 1;
    tail[0] = nums[0];

    for (int i = 1; i < nums_count; i++) {
        if (nums[i] < tail[0]) {
            tail[0] = nums[i];
        } else if (nums[i] > tail[length - 1]) {
            tail[length++] = nums[i];
        } else {
            int index = binarySearch(tail, length, nums[i]);
            tail[index] = nums[i];
        }
    }

    free(tail);
    return length;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    int nums_count = parse_int(ltrim(rtrim(readline())));
    int* nums = (int*)malloc(nums_count * sizeof(int));

    for (int i = 0; i < nums_count; i++) {
        int nums_item = parse_int(ltrim(rtrim(readline())));
        nums[i] = nums_item;
    }

    int result = longestSubsequenceLength(nums_count, nums);

    printf("%d\n", result);

    free(nums);
    return 0;
}

// Helper Functions

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = (char*)malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        if (!line) break;

        data_length += strlen(cursor);
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') break;

        alloc_length <<= 1;
        data = (char*)realloc(data, alloc_length);
        if (!data) return NULL;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
        data = (char*)realloc(data, data_length);
    } else {
        data = (char*)realloc(data, data_length + 1);
        if (data) data[data_length] = '\0';
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) return NULL;
    while (*str != '\0' && isspace(*str)) str++;
    return str;
}

char* rtrim(char* str) {
    if (!str) return NULL;
    char* end = str + strlen(str) - 1;
    while (end >= str && isspace(*end)) end--;
    *(end + 1) = '\0';
    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);
    if (endptr == str || *endptr != '\0') exit(EXIT_FAILURE);
    return value;
}
