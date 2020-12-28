#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int v[n]={0};
int t[n]={0};
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<n;i++){
    cin>>t[i];
}
int s;
int res[n]={0};
for(int i=0;i<n;i++)
{
    s=0;
    int x;
    for(int k=i;k>=0;k--){
       if(v[k]!=0){
        x=v[k];
        v[k]=v[k]-t[i];
        if(v[k]<0)
        {
            if(x>t[i])
              s+=t[k];
            else
              s+=x;
              
        v[k]=0;
        }
        else
        s+=t[i];
       }
    }
    res[i]=s;
    
}

for(int i=0;i<n;i++)
cout<<res[i]<<" ";


	return 0;
}