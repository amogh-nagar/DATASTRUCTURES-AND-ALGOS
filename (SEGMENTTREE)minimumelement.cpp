#include<bits/stdc++.h>
using namespace std;

void build(int *tree,int *a,int index,int s,int e){
if(s>e)
return;


if(s==e)
{
    tree[index]=a[s];
    return;
}
int mid=(s+e)/2;

// left subtree
build(tree,a,2*index,s,mid);
// Right subtree
build(tree,a,2*index+1,mid+1,e);
// Recrusive case
int left=tree[2*index];
int right=tree[2*index+1];

tree[index]=min(left,right);


}


// We can use segement tree anywhere where there is range queries
int query(int *tree,int index,int s,int e,int qs,int qe){
// 3 cases
// 1.No overlap

if(qe>e|| qs<s )
{
    return INT_MAX;
}
// 2.Complete overlap

if(s>=qs && e<=qe)
return tree[index];

// 3.Partial overlap
int mid=(s+e)/2;
int left=query(tree,2*index,s,mid,qs,qe);
int right=query(tree,2*index+1,mid+1,e,qs,qe);
return min(left,right);
}

// it will take O(n)
// UPDATE->
// Node update->update a node only
// 2.Range update-> update all elements in a given range

// Node update
 void update(int *tree,int index,int s ,int e,int i,int value){
// i->index to be updated
if(i<s||i>e)
return;


if(s==e){
tree[index]=value;return;}

int mid=(s+e)/2;
update(tree,2*index,s,mid,i,value);
update(tree,2*index+1,mid+1,e,i,value);
tree[index]=min(tree[2*index],tree[2*index]+1);

}
// Delete is not a ffunction of segment tree

// Range update
void updaterange(int *tree,int index,int s,int e,int rs,int re,int value){
    if(rs<s||re>e){
return;

    }
    if(s==e)
    {
        tree[index]+=value;
        return;
    }

    int mid=(s+e)/2;
    updaterange(tree,2*index,s,mid,rs,re,value);
    updaterange(tree,2*index+1,mid+1,e,rs,re,value);
    tree[index]=min(tree[2*index],tree[2*index+1]);
return;
}

int main(){
int a[]={1,3,2,-2,4,5};
int n=sizeof(a)/sizeof(int);

int *tree=new int[4*n+1];

build(tree,a,1,0,5);

for(int i=0;i<(4*n+1);i++)
cout<<tree[i]<<" ";

int q;
cin>>q;
while(q--){
    int qs,qe;
    cin>>qs>>qe;
    cout<<query(tree,1,0,n-1,qs,qe);
}

    return 0;
}

// Output-> 0 -2 1 -2 1 2 -2 5 1 3 0 0 -2 4 0 0 0 0 0 0 0 0 0 0 0 