#include <stdio.h>
#include <stdlib.h>
#define SIZE 5   // size of hash table

// Node structure for linked list
struct node
{
    int data;
    struct node *next;
};

// Hash table (array of pointers)
struct node *hashTable[SIZE];

// Hash function
int hashFunction(int key)
{
    return key % SIZE;
}

// Insert function
void insert(int key)
{
    int index = hashFunction(key);

    // create new node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = key;
    newNode->next = NULL;

    // if slot is empty
    if (hashTable[index] == NULL)
    {
        hashTable[index] = newNode;
    }
    else
    {
        // collision → add at beginning of linked list
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
}

// Display function
void display()
{
    int i;
    struct node *temp;

    for (i = 0; i < SIZE; i++)
    {
        temp = hashTable[i];
        printf("Index %d: ", i);

        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main()
{
    int i;

    // initialize hash table
    for (i = 0; i < SIZE; i++)
    {
        hashTable[i] = NULL;
    }

    // insert values
    insert(10);
    insert(15);
    insert(20);
    insert(25);
    insert(30);

    // display table
    display();

    return 0;
}
