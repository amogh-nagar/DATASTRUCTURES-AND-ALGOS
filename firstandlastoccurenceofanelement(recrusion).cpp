#include<bits/stdc++.h>
using namespace std;
int firstocc(int a[7],int n,int i,int key){
    if(i==n)
    return -1;
    if(a[i]==key)
    return i;

   return firstocc(a,n,i+1,key);
}
int lastocc(int a[7],int n,int i,int key){
    int res=lastocc(a,n,i+1,key);
    if(res!=-1)
    return res;
    if(a[i]==key)
    return i;

    return -1;
}

int main()
{
int a[7]={4,2,1,2,5,2,7};
cout<<lastocc(a,7,0,2);
    return 0;
}