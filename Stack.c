#include<stdio.h>
#include<stdlib.h>

struct  stack
{
    int size;
    int top;
    int * arr;
};

int ifempty(struct stack *ptr )
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int iffull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int push(struct stack *ptr, int val)
{
    if (ptr->top==ptr->size-1)
    {
        printf ("overflow");

    }
    else 
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;


    }
}
int pop(struct stack *ptr, int val){
    if (ptr->top==-1)
    {
        printf("underflow");
    }
    else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
    }

}

int main()
{
    struct stack * s = (struct stack* )malloc(sizeof(struct stack));
    s->size= 10;
    s->top= -1;
    s->arr = (int *)malloc(s->size *(sizeof(int)));

    push(s, 50);
    push(s, 51);
    push(s, 53);
    push(s, 54);
    printf("%d\n",iffull(s));
    printf("%d\n",ifempty(s));





}

