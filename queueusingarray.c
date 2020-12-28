#include<stdlib.h>
#include<stdio.h>
struct queue{
    int front;
    int rear;
    int size;
    int *Q;
};
void enqueue(struct queue *q,int x)
{
if(q->rear==q->size-1)
printf("Queue is full");
else{
    q->rear++;
    q->Q[q->rear]=x;
}
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
printf("Queue is Empty");
else{
    q->front++;
    x=q->Q[q->front];
}
return x;
}
void display(struct queue q){
    for(int i=q.front+1;i<=q.rear;i++)
    printf("%d ",q.Q[i]);

    printf("\n");
}
void main()
{
struct queue q;
scanf("%d",&q.size);
q.Q=(int*)malloc(q.size*sizeof(int));
q.front=q.rear=-1;
enqueue(&q,10);
display(q);

}