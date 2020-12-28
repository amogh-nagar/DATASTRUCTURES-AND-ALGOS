#include <stdio.h>
#include <stdlib.h>

struct BSTNode
{
    int data;
    struct BSTNode* lchild;
    struct BSTNode* rchild;
};

struct BSTNode* root=NULL;
struct BSTNode* createNode(int data);
struct BSTNode* insert(struct BSTNode* root,int data);;
void preOrder(struct BSTNode* root);

int main()
{
    int data,i,n;
    
    printf("Enter the size of BST : ");
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        root=insert(root,data);
    }

    printf("The preorder traversal is :\n");
    preOrder(root);
    return 0;
}
struct BSTNode* createNode(int data)
{
    struct BSTNode* node=(struct BSTNode*)malloc(sizeof(struct BSTNode));
    node->data=data;
    node->lchild=node->rchild=NULL;
    return node;
}
struct BSTNode* insert(struct BSTNode* root,int data)
{
    if(root==NULL)
       root= createNode(data);
    else if(data<root->data)
        root->lchild=insert(root->lchild,data);
    else
        root->rchild=insert(root->rchild,data);
    return root;
}
void preOrder(struct BSTNode *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    printf("%d ",ptr->data);
    preOrder(ptr->lchild);
    preOrder(ptr->rchild);
}