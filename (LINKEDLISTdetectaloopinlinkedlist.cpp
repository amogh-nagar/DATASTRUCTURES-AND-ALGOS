

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void create(struct node * );
void display(struct node * );
void reverseanddisplay(struct node *);
void findmid(struct node *);
int main()
{
   int ch;
    while(1)
    {
		printf("\nPress 1:Create 2:Display  0:Exit 3:reverse and display 4.Find middle element\n ");
		printf("enter your choice=");
       scanf("%d",&ch);
       switch(ch)
       {
       	case 1: create(head); break;
       	case 2: display(head);break;
       	case 3: reverseanddisplay(head);
                break;
        case 4: findmid(head);break;        
       	case 0: exit(0);
       	default: printf("Wrong choice....use only above option ");
	   }
    } 
	return 0;
}

void findmid(struct node *head){
struct node *p=head;
int c=0;
while(p!=NULL){
  c++;
    p=p->next;
}
c/=2;
if(c%2==0){
int x=1;
struct node *q=head;
while(x!=c){
    q=q->next;
    x++;
}
printf("Middle elements are : %d and %d",q->data,q->next->data);
}
else{
int x=1;
struct node *q=head;
while(x!=c){
    q=q->next;
    x++;
}
printf("Middle element is : %d ",q->data);

}
}

 void reverseanddisplay(struct node* head)
{
if(head==NULL)
{
    return;
}

reverseanddisplay(head->next);
printf("%d->",head->data);
}
void create(struct node *ptr)
  {
  	struct node *temp;
  	int x;
  	temp=(struct node*)malloc(sizeof(struct node));
  	printf("Enter data:");
  	scanf("%d",&x);
  	temp->data=x;
  	temp->next=NULL;
  	if(head==NULL)
  	   head=temp;
  	 else
	   {
	   	ptr=head;
	   	while( ptr->next!=NULL )
	     	{
	   			   ptr=ptr->next;	    
                }
		     ptr->next=temp;
	   }  
  }
  
 void display(struct node *ptr)
  {
  	if(ptr==NULL) printf("Empty List");
  	
  
	  else
	  {	printf("\nLinked list is :\n");
	  while(ptr!=NULL)
  	{
  		printf("%d->",ptr->data);
  		ptr=ptr->next;
	  }
	  }
	  
  }