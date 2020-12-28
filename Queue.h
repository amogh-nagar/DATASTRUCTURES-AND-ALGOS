#ifndef Queue_h
#define Queue_h

#include<stdlib.h>
#include<stdio.h>
struct Node{
   struct Node *lchild;
   int data;
   struct Node *rchild;
};
struct queue{
    int front;
    int rear;
    int size;
    struct Node **Q;
};
void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(struct Node**)malloc(q->size*sizeof(struct Node*));
}
void enqueue(struct queue *q,struct Node *x)
{
if((q->rear+1)%q->size==q->front)
printf("Queue is full");
else{
    q->rear=(q->rear+1)%q->size;
    q->Q[q->rear]=x;
}
}
struct Node* dequeue(struct queue *q)
{
    struct Node *x=NULL;
    if(q->front==q->rear)
printf("Queue is Empty");
else{
    q->front=(q->front+1)%q->size;
    x=q->Q[q->front];
}
return x;
}
int isEmpty(struct queue q)
{
    if(q.front==q.rear)
    return 1;
    else return 0;
}
#endif