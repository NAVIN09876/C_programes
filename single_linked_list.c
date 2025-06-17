#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void revers_linled_list(struct node **head)
{
    printf("REVERESED LIST ");
    
    {
        struct node *current,*prev,*next;
    prev=NULL;
    next=NULL;
    current=*head;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
        /* data */
    };
    
}
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
void insert_at_begning(struct node **head,int value)
{
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=*head;
    *head=newnode;
}
void insert_at_end(struct node **head,int value)
{
    struct node *temp=*head;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(*head==NULL){
        *head =newnode;
        return ;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void insert_at_any_position(struct node **head, int value, int position)
{
    if (position <= 0) {
        printf("INVALID POSITION\n");
        return;
    }

    // Use the existing function for position 1
    if (position == 1) {
        insert_at_begning(head, value);
        return;
    }

    // Count the number of nodes
    struct node *counter = *head;
    int count = 0;
    while (counter != NULL) {
        count++;
        counter = counter->next;
    }

    if (position > count + 1) {
        printf("INVALID POSITION\n");
        return;
    }
    int i=1;

  
    struct node *temp = *head;
    while(i<position-1) {
        temp = temp->next;
        i++;
    }

    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = temp->next;
    temp->next = newnode;
}

void diaplay(struct node *head)
{
    struct node *temp;
    temp=head;
    if (head==NULL){
        printf("LIST IS EMPTY\n");
    }
    else{
        printf("SINGLE LINLED LIST\n");
        while (temp!=NULL)
        {
            /* code */
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("\n");
        
    }

}



int main(){
    struct node *head=NULL;
    insert_at_end(&head,1);
    insert_at_end(&head,2);
    insert_at_end(&head,3);
    insert_at_end(&head,4);
    insert_at_end(&head,5);
    insert_at_any_position(&head,6,6);
    insert_at_any_position(&head,7,7);
   
    delete_node_begning(&head);
    delete_node_begning(&head);
    

    diaplay(head);
    revers_linled_list(&head);
    diaplay(head);
    
}