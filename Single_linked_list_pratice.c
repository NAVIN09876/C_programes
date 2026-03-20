#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void display(struct node *head)
{
    struct node *temp =head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct node* create_node(int data)
{
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct node* add_node_at_beg(struct node *head,int data)
{
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data=data;
    if(head==NULL)
    {
        head= newnode;
        newnode->next=NULL;
        return head;
    }
    newnode->next=head;
    head=newnode;
    return head;
}
struct node* add_node_at_end(struct node *head,int data)
{
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data=data;
    if(head==NULL)
    {
        head= newnode;
        newnode->next=NULL;
        return head;
    }
    else{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    return head;
    }
}
struct node* add_node_at_nth_pos(struct node *head,int pos,int data)
{
    if(head==NULL)
    {
        printf("insert is not posible");
        return 0;
    }
    struct node *temp=head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(pos < 1 || pos > count+1)
    {
        printf("insertion failuer : posotin is grater than linked list or posotin is less than one \n ");
        return 0;
    }
    if(pos==1)
    {
        return add_node_at_beg(head,data);
    }
    temp=head;
    for(int i=0;i<pos-1 && temp!=NULL;i++ )
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("Position out of range\n");
        return head;
    }
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }
    newnode->data=data;
    newnode->next = temp->next;
    temp->next=newnode;
    temp=head;
    return head;

}
struct node* reverse_linked_list(struct node *head)
{
    struct node *curr,*prev,*next;
    curr=head;
    next=NULL;
    prev=NULL;
    while(curr!=NULL)
    {
        next =curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
   // display( prev);
   return(prev);

}


int main()
{
   
    struct node *temp;
    temp= create_node(1);
    temp=add_node_at_beg(temp,0);
    temp= add_node_at_end(temp,2);
    temp=add_node_at_end(temp,3);
    temp=add_node_at_end(temp,5);
    temp=add_node_at_nth_pos(temp,4,4);
    display(temp);
    //temp=reverse_linked_list(temp);
    //display(temp);
    //temp=reverse_linked_list(temp);
    //display(temp);

}