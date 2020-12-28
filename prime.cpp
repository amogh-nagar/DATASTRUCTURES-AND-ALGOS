#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(int x){
    if(x<=1)
    return false;
    else if(x==2)
    return true;
    
   else{
for(int i=2;i<=sqrt(x);i++)
{
    if(x%i==0)
    return false;
}

   }
     return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int x,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>x;   
    prime(x)?cout<<"Prime"<<endl:cout<<"Not prime"<<endl;
    }
    return 0;
}
