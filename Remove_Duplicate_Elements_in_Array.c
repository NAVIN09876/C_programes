#include <stdio.h>

// Function to remove duplicates and return new size
int Remove_Duplicate_Elements(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size;j++ ) {
            if (arr[i] == arr[j]) {
                // Shift all elements left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // reduce size since duplicate is removed
                // Don't increment j here because new element has shifted to j
            } 
        }
    }
    return size;
}

int main() {
    int array[5];
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    int size = Remove_Duplicate_Elements(array, 5);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
