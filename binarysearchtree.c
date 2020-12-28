#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;

} *root = NULL;
void inorder(struct Node *p)
{
    if (p)
    {
        inorder(p->lchild);
        printf("%d,", p->data);
        inorder(p->rchild);
    }
}
struct Node *Rsearch(struct Node *p, int key)
{
    if (p == NULL)
        return NULL;
    else if (key == p->data)
        return p;
    else if (key < p->data)
        return Rsearch(p->lchild, key);
    else
        return Rsearch(p->lchild, key);
}

void insert(int key)
{
    struct Node *p = root, *r = p, *t;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        root = t;
        return;
    }

    while (p != NULL)
    {
        r = p;
        if (key < p->data)
            p = p->lchild;
        else if (key > p->data)
            p = p->rchild;
        else
            return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = key;
    t->lchild = t->rchild = NULL;
    if (r->data < t->data)
        r->rchild = t;
    else if (r->data > t->data)
        r->lchild = t;
}

struct Node *Recrusiveinsert(struct Node *p, int key)
{
    struct Node *r;
    if (p == NULL)
    {
        r = (struct Node *)malloc(sizeof(struct Node));
        r->data = key;
        r->lchild = r->rchild = NULL;
        return r;
    }

    else if (key < p->data)
        p->lchild = Recrusiveinsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = Recrusiveinsert(p->rchild, key);

    return p;
}
int count(struct Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;
    x = count(p->lchild);
    y = count(p->rchild);

    if (p == NULL)
        return 0;
    else
        return x + y + 1;
}
int height(struct Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;

    x = height(p->lchild);
    y = height(p->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;
}
int getHeight(struct Node *root)
{
    int x, y;
    struct Node *p = root;
    if (p == NULL)
        return -1;
    else
    {
        x = getHeight(p->lchild);
        y = getHeight(p->rchild);
        if (x > y)
            return x + 1;
        else
            return y + 1;
    }
    //Write your code here
}
struct Node *inpre(struct Node *p)
{
    while (p && p->rchild != NULL)
        p = p->rchild;

    return p;
}
struct Node *insucc(struct Node *p)
{
    while (p && p->lchild != NULL)
        p = p->lchild;

    return p;
}
struct Node *delete (struct Node *p, int key)
{
    struct Node *q;
    if (p == NULL)
        return NULL;
    else if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        free(p);
        return NULL;
    }
    if (key < p->data)
        p->lchild = delete (p->lchild, key);
    else if (key > p->data)
        p->rchild = delete (p->rchild, key);
    else
    {
        if (height(p->lchild) > height(p->rchild))
        {
            q = inpre(p->lchild);
            p->data = q->data;
            p->lchild = delete (p->lchild, q->data);
        }
        else if (height(p->rchild) > height(p->lchild))
        {
            q = insucc(p->rchild);
            p->data = q->data;
            p->lchild = delete (p->rchild, q->data);
        }
        else
        {
            q = inpre(p->lchild);
            p->data = q->data;
            p->lchild = delete (p->lchild, q->data);
        }
    }
    return p;
}
void main()
{

    root = Recrusiveinsert(root, 20);
    root = Recrusiveinsert(root, 30);
    root = Recrusiveinsert(root, 10);
    root = Recrusiveinsert(root, 5);
    root = Recrusiveinsert(root, 40);
    // delete(root,20);
    int x;
    x = count(root);
    printf("%d\n", x);
    inorder(root);
}
