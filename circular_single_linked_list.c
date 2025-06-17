#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    int i=1;
    int choice=1;
    struct node *newnode,*head,*temp;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Allocation Failed");
            return 1;
        }
        printf("enter data :");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want extend press 1 or press 0 to stop :");
        scanf("%d",&choice);
    } 
    if(temp!=NULL){
        temp->next=head; // making circular linked list
    }
    
    // to Display 
    if(head!=NULL)
    {
        temp=head;
    }
    printf("circular single linked list\n");
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
    printf("---Back to head\n");
}