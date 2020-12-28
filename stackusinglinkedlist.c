#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *next;
}*top=NULL;
void push(int x){
struct node *t=(struct node*)malloc(sizeof(struct node));
if(t==NULL)
printf("Stack Overflow");
else{
    t->data=x;
t->next=top;
top=t;
}

}
int pop()
{
    struct node *t;
int x=-1;
    if(top==NULL)
    printf("Stack underflow");
    else{
        t=top;
         x=t->data;
top=top->next;
free(t);
    }
return x;
}
void display()
{
   
    struct node *p;
    p=top;
    while(p){
        printf("%d\n",p->data);
        p=p->next;
    }
}

void main(){

     push(10);
     push(10);
     push(10);
     push(10);
     
     display();

}