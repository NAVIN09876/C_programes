#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void delete_at_n_position(struct node **head, int position) {
    if (*head == NULL || position <= 0) {
        printf("Invalid position or empty list.\n");
        return;
    }

    struct node *temp = *head;

   
    if (position == 1) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Traverse to the (position - 1) node
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position is invalid
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds.\n");
        return;
    }

    struct node *next_node = temp->next;
    temp->next = next_node->next;
    free(next_node);
}

void delete_node_ending(struct node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = *head;

    // Only one node in the list
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    // Traverse to the second last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

void delete_node_begning(struct node **head)
{
    if(*head==NULL)
    {
        printf("SINGLE LINKED LIST IS EMPTY\n");
        return ;
    }
    else{
    struct  node *temp;
    temp=*head;
    *head =temp->next;
    free(temp);}

}
void insert_at_the_end(struct node **head,int value)
{
    struct node *temp;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(*head==NULL)
    {
        
        *head=newnode;
    }
    else{
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=newnode;

    }

}

void insert_at_begning(struct node **head,int value)
{
    struct node *temp;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(*head==NULL)
    {
        newnode->data=value;
        newnode->next=NULL;
        *head=newnode;

    }
    else{
    
    newnode->data=value;
    newnode->next=*head;
    *head=newnode;}
}
void print_linked_list(struct node **head)
{
    struct node *temp;
      printf("LINKED LIST---");
    temp=*head;
    while(temp!=NULL)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    printf("\n");

}
int main()
{
    struct node *head=NULL;
    int value;
    
    insert_at_begning(&head,1);
    insert_at_the_end(&head,2);
    insert_at_the_end(&head,3);
    insert_at_the_end(&head,4);
    insert_at_the_end(&head,5);
    insert_at_the_end(&head,6);
    insert_at_the_end(&head,7);
    insert_at_the_end(&head,8);
    insert_at_the_end(&head,9);
    insert_at_the_end(&head,10);
    insert_at_the_end(&head,11);
    delete_node_begning(&head);
    delete_node_ending(&head);
    delete_at_n_position(&head,5);


    print_linked_list(&head);
}