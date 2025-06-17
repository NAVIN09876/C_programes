#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
int main()
{
    int choice=1;
    struct node *head,*newnode,*temp;
    while(choice){
        newnode= (struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("memory allocation Failed\n");
            return 0;
        }
        printf("Enten value :");
        scanf("%d",&newnode->data);
        if (head==NULL)
        {
            head=temp=newnode;
            newnode->next=NULL;
            newnode->prev=NULL;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
        printf("Do you want Extend press 1 to exit press 0 :");
        scanf("%d",&choice);
    }
    temp=head;
    //display
printf("Double Linked List \n");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;

    }
    printf("\n");

}
