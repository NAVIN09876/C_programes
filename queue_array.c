#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rare = -1;

void enqueue(int value) {
    if (rare == SIZE - 1) {
        printf("\nQUEUE IS FULL!!\n");
    } else {
        if (front == -1 && rare == -1) {
            front = 0;
            rare = 0;
        } else {
            rare++;
        }
        queue[rare] = value;
    }
}

void dequeue() {
    if (front == -1 || front > rare) {
        printf("\nQUEUE IS EMPTY!!\n");
        front = rare = -1;
    } else {
        printf("DELETED VALUE: %d\n", queue[front]);
        front++;
        if (front > rare) {
            front = rare = -1;  // Reset when queue becomes empty
        }
    }
}

void display() {
    if (front == -1 || front > rare) {
        printf("\nQUEUE IS EMPTY!!\n");
    } else {
        printf("\nQUEUE ELEMENTS ARE:\n");
        for (int i = front; i <= rare; i++) {
            printf("%d -> ", queue[i]);
        }
        printf("NULL\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();

    dequeue();
    display();

    enqueue(4);
    enqueue(5);
    enqueue(6);  // Should show "QUEUE IS FULL"
    display();

    return 0;
}
