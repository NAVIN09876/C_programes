#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node *next;
};


void insert_at_begning(struct node **head, int value);
void insert_at_end(struct node **head, int value);
void insert_at_any_position(struct node **head, int value, int position);
void delete_node_begning(struct node **head);
void delete_node_ending(struct node **head);
void delete_at_n_position(struct node **head, int position);
void display(struct node *head);

int main() {
    struct node *head = NULL;
    char input[100];
    char command[20];
    int value, pos;

    printf("Linked List Shell. Type 'help' to see commands.\n");

    while (1) {
        printf("> ");
        fgets(input, sizeof(input), stdin);

        if (sscanf(input, "%s", command) != 1)
            continue;

        if (strcmp(command, "insert_beg") == 0) {
            if (sscanf(input, "%*s %d", &value) == 1)
                insert_at_begning(&head, value);
            else
                printf("Usage: insert_beg <value>\n");
        }
        else if (strcmp(command, "insert_end") == 0) {
            if (sscanf(input, "%*s %d", &value) == 1)
                insert_at_end(&head, value);
            else
                printf("Usage: insert_end <value>\n");
        }
        else if (strcmp(command, "insert_pos") == 0) {
            if (sscanf(input, "%*s %d %d", &value, &pos) == 2)
                insert_at_any_position(&head, value, pos);
            else
                printf("Usage: insert_pos <value> <position>\n");
        }
        else if (strcmp(command, "delete_beg") == 0) {
            delete_node_begning(&head);
        }
        else if (strcmp(command, "delete_end") == 0) {
            delete_node_ending(&head);
        }
        else if (strcmp(command, "delete_pos") == 0) {
            if (sscanf(input, "%*s %d", &pos) == 1)
                delete_at_n_position(&head, pos);
            else
                printf("Usage: delete_pos <position>\n");
        }
        else if (strcmp(command, "display") == 0) {
            display(head);
        }
        else if (strcmp(command, "help") == 0) {
            printf("Available commands:\n");
            printf("  insert_beg <value>\n");
            printf("  insert_end <value>\n");
            printf("  insert_pos <value> <position>\n");
            printf("  delete_beg\n");
            printf("  delete_end\n");
            printf("  delete_pos <position>\n");
            printf("  display\n");
            printf("  exit\n");
        }
        else if (strcmp(command, "exit") == 0) {
            break;
        }
        else {
            printf("Unknown command. Type 'help' to see available commands.\n");
        }
    }

    return 0;
}

// Definitions of linked list functions

void insert_at_begning(struct node **head, int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = *head;
    *head = newnode;
}

void insert_at_end(struct node **head, int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    struct node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
}

void insert_at_any_position(struct node **head, int value, int position) {
    if (position <= 0) {
        printf("Invalid position.\n");
        return;
    }
    if (position == 1) {
        insert_at_begning(head, value);
        return;
    }
    struct node *temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds.\n");
        return;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = temp->next;
    temp->next = newnode;
}

void delete_node_begning(struct node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = *head;
    *head = temp->next;
    free(temp);
}

void delete_node_ending(struct node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void delete_at_n_position(struct node **head, int position) {
    if (*head == NULL || position <= 0) {
        printf("Invalid position or list is empty.\n");
        return;
    }
    struct node *temp = *head;
    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds.\n");
        return;
    }
    struct node *to_delete = temp->next;
    temp->next = to_delete->next;
    free(to_delete);
}

void display(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
