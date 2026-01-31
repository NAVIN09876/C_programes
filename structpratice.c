#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    int choice = 1;
    struct node *newnode,*head=NULL,*temp= NULL;
    
    
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        if (newnode==NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }
        else{
            if(head==NULL)
            {
                head=temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=newnode;
            }
            printf("Press 1 to extend or press 0 to stop:");
            scanf("%d",&choice);
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp= temp->next;
    }
    printf("NULL");
    
    //free function
    
    temp=head;
    
    
    while(temp!=NULL)
    {
        struct node *nodenext = temp->next;
        free(temp);
        temp=nodenext;
        
    }
 // printf("%d",temp->data);
    
}