#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;


};
void traversal( struct node *head){
    struct node *ptr = head;
    do
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    


}

struct node * inseratfirst(int n , struct node *head){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = n;
    struct node *p = head->next;
    while (p->next!=head)
    {
        p=p->next;

    }

    p->next = ptr;
    ptr->next= head;
    head=ptr;

    return head;
}



int main(){

    struct node *head; 
    struct node *first; 
    struct node *second; 
    struct node *third; 
    struct node *fourth; 

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 7;
    head->next = first;

    first->data = 11;
    first->next = second;

    second->data = 22;
    second->next = third;

    third->data = 23;
    third->next = fourth;
    
    fourth->data = 33;
    fourth->next = head;
    traversal(head);
    
    head = inseratfirst(55 ,head);
    traversal(head);

     

    
}
