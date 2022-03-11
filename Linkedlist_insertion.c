#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};


int linkedlisttraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}

struct Node * insertatfirst(struct Node *head , int data){

    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;


}

struct Node * insertatindex(struct Node *head , int index , int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p =head;
    int i =0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;

    
    
}

struct Node *insertatend(struct Node *head , int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head ;
    while (p->next!= NULL)
    {
        p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
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
    head = insertatfirst(head , 56);
    printf("linked list after insertion ");

    linkedlisttraversal(head);
}

