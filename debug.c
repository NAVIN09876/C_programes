#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int *arr, int n) {
    int j = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    return j;
}

int main() {
    int n;
    int *arr;

    printf("enter n :");
    scanf("%d", &n);

    arr = malloc(sizeof(int) * n);

    printf("enter values\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int newSize = removeDuplicates(arr, n);

    for(int i = 0; i < newSize; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
