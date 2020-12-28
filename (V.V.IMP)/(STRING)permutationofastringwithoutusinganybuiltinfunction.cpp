
// C++ program to demonstrate working of rotate
#include <bits/stdc++.h>
using namespace std;

// long long int f[20];
void swap(char *x,char *y){
    char t;
    
    t=*x;
    *x=*y;
    *y=t;
}
void perm(string s,int l,int r){
if(l==r)
{cout<<s<<endl;
return;}
    
    else{
        for(int i=l;i<=r;i++)
        {
            swap(&s[l],&s[i]);
            perm(s,l+1,r);
            
            swap(&s[l],&s[i]);
        }
    }
    
}

int main()
{
perm("ABC",0,2);
    return 0;
}
