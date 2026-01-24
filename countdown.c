#include <stdio.h>
#include <unistd.h>

void countdown(int n) {
    for (int i = n; i >= 0; i--) {
        printf("Countdown: %d\n", i);
        sleep(10);  // Sleep for 1 second
    }
    printf("Blast off!\n");
}

int main() {
    printf("Starting countdown...\n");
    countdown(100);
    return 0;
}
