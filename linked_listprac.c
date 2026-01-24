#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;

void add_node_at_end(struct node *head,int value)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if(head == NULL)
    {
        head=newnode;

    }
    else{
        struct node *temp= head;
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }


}
int main()
{
    int choice =1;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }
        printf("Enter data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode; 
            temp=newnode;
        }
        printf("press 1 to add node or 0 to stop :");
        scanf("%d",&choice);
    }
temp=head;
while(temp!=NULL)
{
    printf("%d->",temp->data);
    temp = temp->next;
}

}
