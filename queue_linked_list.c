#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Pointers to track the front and rear of the queue
struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue operation
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL) { // Queue is empty
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued: %d\n", value);
}

// Dequeue operation
void dequeue() {
    if (front == NULL) {
        printf("QUEUE IS EMPTY!!\n");
        return;
    }

    struct Node* temp = front;
    printf("Deleted value: %d\n", temp->data);
    front = front->next;

    // If queue becomes empty
    if (front == NULL)
        rear = NULL;

    free(temp);
}

// Display the queue
void display() {
    if (front == NULL) {
        printf("QUEUE IS EMPTY!!\n");
        return;
    }

    struct Node* temp = front;
    printf("QUEUE ELEMENTS ARE:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to test the queue
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue(); // Trying to dequeue from empty queue
    display();

    return 0;
}
