#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    char *infix="a+b+(c*d))";
    
if(isbalancedparenthesis(infix))
printf("Balanced");
else
{
    printf("Not balanced");
}

 return 0;
}