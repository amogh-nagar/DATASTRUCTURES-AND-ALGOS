#include<bits/stdc++.h>
using namespace std;
bool sorted(int a[],int n){
    if(n==1)
    return true;
    bool rest=sorted(a+1,n-1);
    if(a[0]<a[1] && rest)
    {
        return true;
    }
    return false;
}

int main(){

int a[]={1,2,3,4,5};
int n=5;
if(sorted(a,n))
cout<<"Sorted";
else
{
    cout<<"Not sorted";
}

    return 0;
}