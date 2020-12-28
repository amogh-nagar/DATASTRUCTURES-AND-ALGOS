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
if((q->rear+1)%q->size==q->front)
printf("Queue is full");
else{
    q->rear=(q->rear+1)%q->size;
    q->Q[q->rear]=x;
}
}
int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
printf("Queue is Empty");
else{
    q->front=(q->front+1)%q->size;
    x=q->Q[q->front];
}
return x;
}
void display(struct queue q){
    int i=q.front+1;
    do{
        printf("%d ",q.Q[i]);
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);

    printf("\n");
}
void main()
{
struct queue q;
scanf("%d",&q.size);
q.Q=(int*)malloc(q.size*sizeof(int));
q.front=q.rear=-1;
enqueue(&q,1);
enqueue(&q,2);
enqueue(&q,3);
enqueue(&q,4);
enqueue(&q,5);
dequeue(&q);
dequeue(&q);
enqueue(&q,6);

display(q);

}