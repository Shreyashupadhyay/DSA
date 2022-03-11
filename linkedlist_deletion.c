#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};

struct Node * deleteatfirst(struct Node *head )
{
    struct Node * p = head ;
    head = head->next;
    free(p);
    return head;


}

struct Node * deleteatindex(struct Node * head , int index)
{
    struct Node * p = head ;
    struct Node * q = head->next;

    for( int i = 0 ; i < index-1 ;i++)
    {
        p =p->next;
        q = q->next;

    }
    p->next=q->next;
    free(q);
    return head;
}

struct Node * deleteatend(struct Node * head)
{
    struct Node * p = head;
    struct Node * q = head->next;

    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next= NULL;
    free(q);
    return head;
}


void linkedlisttraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}

struct Node * deleteatvalue(struct Node * head , int value)
{
    struct Node * p = head ;
    struct Node * q = head->next;

    while (q->data == value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;

    }

    p->next = q->next;

    free(q);
    return head;


}





int main()
{
    struct Node* head;
    struct Node* first;
    struct Node* second;
    struct Node* Third;
    struct Node* fourth;

    head = (struct Node *)malloc(sizeof(struct Node));  
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node)); 

    head->data = 7;
    head->next = first;

    first->data = 11;
    first->next = second;

    second->data = 22;
    second->next = Third;

    Third->data = 23;
    Third->next = fourth;
    
    fourth->data = 33;
    fourth->next = NULL;

    linkedlisttraversal(head);
    
    printf("linked list after deletion ");
    // head =  deleteatfirst(head );
    // head = deleteatindex(head , 3);
    // head = deleteatend(head);
    head = deleteatvalue(head , 23);



    linkedlisttraversal(head);

    



 
}

