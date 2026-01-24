#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node* add_node_at_end(struct node *head,int value)
{
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
     if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        return newnode;
    }
    else{
        struct node *temp =head;
        while(temp->next!=NULL)
        {
            temp= temp->next;
        }

        temp->next=newnode;
    }
    return head;

}
struct node* add_node_at_nth_position(struct node *head,int value,int pos)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
     if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    newnode->data = value;
    newnode->next = NULL;

    if(pos==1)
    {
        newnode->next=head;
        return newnode;
    }

    int count=0;
    struct node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(pos < 1 || pos > count+1)
    {
        printf("insertation failure \n");
        free(newnode);
        return head;
    }
    temp = head;
    for(int i=1;i<pos-1;i++)
    {
        temp = temp->next;
    }
    newnode->next= temp->next;
    temp->next=newnode;
    return head;

}
struct node* add_node_at_beg(struct node *head,int value)
{
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
     if(head==NULL)
    {
        return newnode;
    }
    newnode->data=value;
    newnode->next=head;
    head=newnode;
    return head;

}

struct node* create_new_node(int value)
{
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    newnode->data=value;
    newnode->next=NULL;
    struct node*head= newnode;
    return head;

}
void display(struct node *head)
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct node* delete_node_at_beg(struct node *head)
{
    if (head == NULL)
    return NULL;
    struct node *temp =head ;

    head = temp->next;

    free(temp);

    return head;

}
struct node* delete_node_at_end(struct node *head)
{
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct node *temp = head;
    while (temp->next->next!= NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
struct node* delete_node_at_n_position(struct node *head,int pos)
{
    if (head == NULL) 
    return NULL;
    if (pos == 1) {
        struct node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count=0;
    struct node *temp = head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
       if(pos < 1 || pos > count+1)
    {
        printf("failure \n");
        //free(newnode);
        return head;
    }
    temp = head;
    for (int i = 1; i < pos - 1; i++)
     {
        if (temp == NULL)
        { return head;}
        temp = temp->next;
        
    }
    if (temp->next == NULL) 
    return head;
    struct node* to_delete = temp->next;
    temp->next = to_delete->next;
    free(to_delete);
    return head;
}
struct node* reverse_by_links(struct node *head)
{
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;   // Save next
        curr->next = prev;   // Reverse link
        prev = curr;         // Move prev
        curr = next;         // Move curr
    }

    return prev;  // New head
}
int sum_of_linked_list(struct node* head)
{
    if(head==NULL)
    {
        printf("filure\n");
        return 0;
    }
    
    else{
        int sum=0;
        struct node *temp =head;
        
        while(temp!=NULL)
        {
            sum+=temp->data;
            temp=temp->next;
        }
        printf("sum of linked list = %d\n",sum);
    }
}
int max_value(struct node* head)
{
     if(head==NULL)
    {
        printf("filure\n");
        return 0;
    }
    
    else{
        int max=0;
        struct node *temp =head;
        
        while(temp!=NULL)
        {
            if(temp->data > max)
            {
                max = temp->data;
            }

            temp=temp->next;
        }
        printf("max number in linked list = %d\n",max);
    }

}
int min_value(struct node* head)
{
     if(head==NULL)
    {
        printf("filure\n");
        return 0;
    }
    
    else{
        int min;
        struct node *temp =head;
        
        while(temp!=NULL)
        {
            if(temp->data < min)
            {
                min = temp->data;
            }

            temp=temp->next;
        }
        printf("min number in linked list = %d\n",min);
    }

}
int second_max_value(struct node*head)
{
     if(head==NULL)
    {
        printf("filure\n");
        return 0;
    }
    
    else{
        int max=head->data;
        int m2=head->next->data;
        struct node *temp =head;
        
        while(temp!=NULL)
        {
            if(temp->data > max)
            {
                m2=max;
                max = temp->data;

            }
            else if(temp->data < max && temp->data >m2)
            {
                m2 = temp->data;
            }

            temp=temp->next;
        }
        printf("second max number in linked list = %d\n",m2);
    }
    
}
int main()
{
    struct node *temp;
    temp = create_new_node(1);
    temp=add_node_at_end(temp,2);
    temp=add_node_at_end(temp,3);
    temp=add_node_at_beg(temp,0);
    temp=add_node_at_end(temp,5);
    temp=add_node_at_nth_position(temp,4,4);
    temp=delete_node_at_beg(temp);
    temp=delete_node_at_end(temp);
    temp=delete_node_at_n_position(temp,2);
    temp=add_node_at_nth_position(temp,2,2);
    temp=delete_node_at_end(temp);
    temp= add_node_at_nth_position(temp,3,3);
    temp= add_node_at_beg(temp,0);
    display(temp);
    temp = reverse_by_links(temp);
    display(temp);
    sum_of_linked_list(temp);
    max_value(temp);
    min_value(temp);
    second_max_value(temp);
}