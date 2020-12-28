#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void create(int x)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(!t)
    printf("Queue is full");
    else{
t->data=x;t->next=NULL;
    if(front==NULL)
    front=rear=t;
    else{
        
    rear->next=t;
      rear=t;
    }
    }
}
int dequeue()
{
    int x=-1;
    struct node *p;
    if(front==NULL)
    printf("queue is empty");
    else{
        p=front;
x=p->data;
front=front->next;
free(p);
    }
    return x;
}
void display()
{
    struct node *p=front;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
void main()
{
create(10);
create(20);
display();

}