// memory_test.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int *arr = malloc(100 * 1024 * 1024); 
    sleep(10); 
    printf("pid: %d\n", getpid());
    free(arr);
    return 0;
}
