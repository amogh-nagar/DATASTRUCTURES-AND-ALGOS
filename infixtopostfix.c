#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node *next;
}*top=NULL;
void push(char x){
struct node *t=(struct node*)malloc(sizeof(struct node));
if(t==NULL)
printf("Stack Overflow");
else{
    t->data=x;
t->next=top;
top=t;
}

}
char pop()
{
    struct node *t;
char x=-1;
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
        printf("%c",p->data);
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
char* intopost(char *infix){
char *postfix;
int len=strlen(infix);
 postfix=(char*)malloc((len+2)*sizeof(char));
 int i=0,j=0;

 while(infix[i]!='\0')
{
    if(isOperand(infix[i]))
    postfix[j++]=infix[i++];
    
    else if(pre(infix[i])>pre(top->data))
             push(infix[i++]);
    else
    {
        
        postfix[j++]=pop();
        
    }
    
}
while(top!=NULL)
postfix[j++]=pop();

postfix[j]='\0';
return postfix;
}
void main(){
    char *infix="a+b-c*d/e";
    // postfix1('0');
    char *postfix=intopost(infix);
    printf("%s",postfix);
}

//brackets have highest parenthesis