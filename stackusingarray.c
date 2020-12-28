#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *s;

};
void push(struct stack *st,int x){
    if(st->top==st->size-1)
    printf("Overflow");
    else{
st->top++;
st->s[st->top]=x;
printf("\nPushed");
    }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    printf("\n Underflow");
    else{
     x=st->s[st->top];
        st->top--;
return x;
    }
    return x;
}
void main()
{
struct stack st;
printf("Enter size");
fflush(stdin);
scanf("%d",&st.size);

st.s=(int*)malloc(st.size*sizeof(int));
st.top=-1;

push(&st,10);
push(&st,10);
push(&st,10);
push(&st,10);
push(&st,10);
push(&st,10);
pop(&st);
pop(&st);pop(&st);pop(&st);pop(&st);pop(&st);
}