
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
int pop()
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
return 3;
else if(x==')')
return 0;

return 0;



}
int insidestack()
{
    if(top==NULL)
    return 0;
   else if(top->data=='+'||top->data=='-')
    return 2;
    else if(top->data=='*'||top->data=='/')
return 4;
else if(top->data=='^')
return 5;
else if(top->data='(')
return 0;
else if(top==NULL)
return 0;



}

int isOperand(char x)
{
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^'||x=='('||x==')')
    return 0;
    else return 1;
}

// The driver function for infix to postfix conversion 
char* intopost(char *infix){
char *postfix;
int len=strlen(infix);
 postfix=(char*)malloc((len+2)*sizeof(char));
 int i=0,j=0,flag=0;

 while(infix[i]!='\0')
{
    if(isOperand(infix[i]))
    postfix[j++]=infix[i++];
    else if(infix[i]=='(')
push(infix[i++]);



    else if(pre(infix[i])>insidestack() && infix[i]!=')')
push(infix[i++]);
    else
    {

if(top->data=='(')
{pop();
i++;}
else
        postfix[j++]=pop();
     

    
}}
while(top!=NULL)
postfix[j++]=pop();

postfix[j]='\0';
return postfix;
}
void reverse(char *exp){

    int size = strlen(exp);
    int j = size, i=0;
    char temp[size];

    temp[j--]='\0';
    while(exp[i]!='\0')
    {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp,temp);
}
void brackets(char* exp){
    int i = 0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
}
char * InfixtoPrefix(char *exp){

    int size = strlen(exp);

    // reverse string
    reverse(exp);
    //change brackets
    brackets(exp);
    //get postfix
    char *a=intopost(exp);
    // reverse string again
    reverse(a);
    return a;
}

int main()
{    
    printf("The infix is: ");

    char expression[] = "A+B-C"; 
    printf("%s\n",expression);
    char *s=InfixtoPrefix(expression); 

    printf("The prefix is: ");
    printf("%s\n",s);

    return 0; 
}


// REVERSE THE PRECEDENCE OF OPERATOR