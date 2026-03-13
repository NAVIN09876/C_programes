#include<stdio.h>
#include<stdlib.h>
struct node* add_node_at_end(struct node* head,int data);
struct node* add_node_at_n_pos(struct node* head, int data, int pos);
struct node* add_node_at_beg(struct node* head,int data);
struct node* create_node(int data);
struct node* delete_node_at_beg(struct node* head);
struct node* delete_node_at_end(struct node* head);
struct node* delete_node_at_n_pos(struct node* head,int pos);
struct node{
    int data;
    struct node* next;
};
struct node* delete_node_at_n_pos(struct node* head,int pos)
{
    struct node* temp = head;
    int count =0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    if(pos < 1 || pos > count+1)
    {
        printf("posotin is grater than linked list\n ");
        return 0;
    }
    if (pos==1)
    {
        return delete_node_at_beg(head);
    }
    temp=head;
    for(int i=1;i<pos-1 && temp!= NULL;i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next==NULL) {
    printf("Position out of range\n");
    return head;
    }
    struct node* del = temp->next;     // store node to delete
    temp->next = del->next;            // unlink
    free(del); 
    return head;
}
struct node* delete_node_at_beg(struct node* head){
    struct node*temp =head;
    head= temp->next;
    free(temp);
    return head;
}
struct node* delete_node_at_end(struct node* head){
    struct node* temp = head;

    if (head == NULL) {
        return NULL;
    }
    if (temp->next == NULL) {
        free(temp);
        return NULL;
    }
   else 
   {
    while (temp->next->next!= NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
    return head;


}
struct node* add_node_at_n_pos(struct node* head,int data,int pos)
{
    struct node* temp = head;
    int count =0;
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
    if (pos==1)
    {
        return add_node_at_beg(head, data);
    }
    temp=head;
    for(int i=1;i<pos-1 && temp!= NULL;i++)
    {
        temp = temp->next;
    }
    if (temp == NULL) {
    printf("Position out of range\n");
    return head;
}
    struct node* newnode =(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("MEMORY ALLOCATION FAILED \n");
        return head;
    }
    newnode->data=data;
    newnode->next=temp->next;
    temp->next=newnode;

    temp=head;
    return head;
}
struct node* add_node_at_end(struct node* head,int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed/n");
        return 0;
    }
    newnode->data=data;
    newnode->next=NULL;
    struct node *temp = head;
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else{
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
    }

}
struct node* add_node_at_beg(struct node* head,int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed/n");
        return head;
    }
    newnode->data=data;
    newnode->next=head;
    head= newnode;
    return head;
}

struct node * create_node(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    newnode->data=data;
    newnode->next=NULL;
    struct node *head =newnode;
    return head;
}
void display(struct node* head)
{
    struct node* temp =head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    
}
struct node* reverse_linked_list(struct node* head)
{
    struct node * curr =head;
    struct node * next =NULL;
    struct node * prev =NULL;

    while (curr!=NULL)
    {
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;   
    }
    return prev;
    
}
int main()
{
    struct node* temp;
   temp = create_node(1);
  // temp = add_node_at_beg(temp,0);
   temp = add_node_at_end(temp,2);
   temp = add_node_at_end(temp,3);
   temp = add_node_at_end(temp,5);
   temp =  add_node_at_n_pos(temp, 4,4);
   temp =  add_node_at_n_pos(temp, 6,6);
   temp = add_node_at_end(temp,7);
   temp =  reverse_linked_list(temp);
   temp = add_node_at_end(temp,0);
   temp = delete_node_at_beg(temp);
   temp = delete_node_at_end(temp);
   //temp=  delete_node_at_n_pos(temp,3);
    display(temp);
}
