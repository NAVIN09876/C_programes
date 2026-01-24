#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
    struct node *newnode, *head = NULL, *temp = NULL;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter data: ");
        if (scanf("%d", &newnode->data) != 1) {
            printf("Invalid input. Exiting.\n");
            free(newnode);
            break;
        }
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to extend? Press 1 to continue, 0 to stop: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
    }

    printf("Linked List: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

 
    temp = head;
    while (temp != NULL)
    {
        struct node *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}