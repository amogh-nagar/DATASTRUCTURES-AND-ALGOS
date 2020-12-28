#include<iostream>
using namespace std;

// INSERT AN ELEMENT IN AN ARRAY IN NEXT FREE SPACE BECAUSE WE HAVE TO MAINTAIN A COMPLETE BINARY TREE ALSO
// MAX HEAP ->EVERY NODE SHOULD HAVE AN ELEMENT GREATER THASN ALL ITS DESCENDENTS
void insert(int a[],int x)
{
    int t=a[x],i=x;
    while(i>1 && t<a[i/2])
    {
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=t;
}
void swap(int *x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

// HEAP IS A COMPLETE BINARY TREE BEACUSE IT'S IMPLEMENTED AS AN ARRAY
void deleteheap(int a[],int n)
{
    int x=n;
    int val=a[1],t=a[x];
    a[1]=a[x];
   a[x]=val;
    int i=1,j=2*i;
    while(j<=x-1 )
    {
        if(j<n-1 && a[j+1]<a[j])
        j++;
        if(a[j]<a[i])
        {swap(&a[i],&a[j]);
i=j;
j=2*j;
        }
        else
        {
            break;
        }
        
    }
   
    
    }
void print(int a[],int n)
{
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[]={0,6,5,2,3,8,4,7,1}, n=8;
for(int i=2;i<=n;i++)
{
    insert(a,i);
}
  for(int i=n;i>1;i--)
{
deleteheap(a,i);
}
print(a,n);

    return 0;
}