#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*temp,*newnode;
    int choice=1;
    head=0;
   
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data :");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;

        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
         printf("press 1 to add a new node or press 0 to stop :");
    scanf("%d",&choice);
    }
   
    temp=head;
    printf("linked list------->");
    while(temp!=NULL)
    {
        printf("->%d",temp->data);
        temp= temp->next;
    }
    printf("\n");

}