#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};


void linkedlisttraversal(struct Node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
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
    
    printf("linked list after insertion ");

    linkedlisttraversal(head);

    



 
}

