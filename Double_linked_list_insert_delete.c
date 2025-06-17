#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
void insert_at_beg(struct node **head, int value);  // <-- add this line
void insert_at_end(struct node **head, int value);
void insert_at_n_position(struct node **head, int value, int pos);
void Display(struct node *head);
void insert_at_n_position(struct node **head,int value,int pos){
    if(pos<=0)
    {
        printf("INVALID POSITION \n");
        return;
    }
    if(pos==1)
    {
        insert_at_beg(head,value);
        return;
    }
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    struct node *temp= *head;
    int count=1;
    while (temp != NULL && count < pos - 1) {
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        printf("OUT OF BOUNDARY\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    newnode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newnode;
    }

    temp->next = newnode;
}
void insert_at_end(struct node **head, int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL) {
        *head = newnode;
        return;
    }

    struct node *temp =* head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}



void insert_at_beg(struct node **head,int value)
{
    struct node *newnode,*temp=*head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        
    }
    else{
        newnode->next=temp;
        temp->prev=newnode;        
    }
    *head=newnode;
}
void Display(struct node *head) {
    struct node *temp = head;
    printf("Doubly Linked List:\n");
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" <-> ");
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node *head=NULL;
    insert_at_beg(&head,1);
    insert_at_end(&head,2);
    insert_at_end(&head,3);
    insert_at_end(&head,4);
    insert_at_n_position(&head,5,5);
    insert_at_n_position(&head,6,6);
    insert_at_n_position(&head,7,7);
    Display(head);
}