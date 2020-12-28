#include<stdio.h>
#include<stdlib.h>
struct Node{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
    
}*root=NULL;

int Nodeheight(struct Node *p){
    int hl,hr;
    hl=p && p->lchild?p->lchild->height:-1;
    hr=p && p->rchild?p->rchild->height:-1;

return hl>hr?hl+1:hr+1;
}
int balancefactor(struct Node *p){
    int hl,hr;
    hl=p && p->lchild?p->lchild->height:-1;
    hr=p && p->rchild?p->rchild->height:-1;
return hl-hr;
}

struct Node * llrotation(struct Node *p){
    
}
struct Node* Recrusiveinsert(struct Node *p,int key){
   struct Node *r;
    if(p==NULL)
    {
r=(struct Node *)malloc(sizeof(struct Node ));
r->data=key;
r->lchild=r->rchild=NULL;
return r;
    }
   
    else if(key<p->data)
     p->lchild=Recrusiveinsert(p->lchild,key);
    else if(key>p->data)
    p->rchild= Recrusiveinsert(p->rchild,key);

p->height=Nodeheight(p);
if(balancefactor(p)==2 && balancefactor(p->lchild)==1)
return llrotation(p);
else if(balancefactor(p)==2 && balancefactor(p->lchild)==-1)
return lrrotation(p);
else if(balancefactor(p)==-2 && balancefactor(p->lchild)==-1)
return rrrotation(p);
else if(balancefactor(p)==-2 && balancefactor(p->lchild)==1)
return rlrotation(p);

     return p;
}