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
        printf("%d",p->data);
        p=p->next;
    }
}
int isbalancedparenthesis(char *exp){
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        push(exp[i]);
        else if(exp[i]==')')
        {
            if(top==NULL)return 0;
            pop();
        }
    }
    if(top==NULL)
    return 1;
    else
    return 0;



}

int pre(char x)
{
    if(x=='+'||x=='-')
    return 1;
    else if(x=='*'||x=='/')
return 2;


return 0;

}



int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/')
    return 0;
    
    else return 1;
}
void evaluate(char *postfix){
int x1,x2,r;

 int i=0;
 while(postfix[i]!='\0')
{
    if(isspace(postfix[i]))
    i++;
    
    else if(isOperand(postfix[i])){
    push(postfix[i]-'0');i++;}
    else {
        x1=pop();
        x2=pop();
    switch(postfix[i])
    {
        case '+': r=x2+x1;
        push(r);
        break;
        case '-': r=x2-x1;
        push(r);
        break;
        case '*': r=x2*x1;
        push(r);
        break;
        case '/': r=x2/x1;
        push(r);
        break;
        
    }
    i++;
    }
    
    
}
printf("Result is %d",pop());

}
int main(){
    char *postfix="35*   62/+4-";
    evaluate(postfix);
  return 0;
}


//brackets have highest parenthesis