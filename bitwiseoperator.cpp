#include <bits/stdc++.h>

using namespace std;



int main()
{
int t,n,k,max=0,a,v,b,c;
cin>>t;

for(int l=0;l<t;l++){
    max=0;
    cin>>n>>k;
    vector<int> x;
    for(int g=1;g<=n;g++)
    x.push_back(g);

v=x.size();

for(int i=0;i<v-1;i++)
{
a=x[i];
    for(int j=i+1;j<v;j++)
    {
        b=x[j];
    //   b=b<<x[j];
      if((a & b) >0 && (a & b) < k)
      {
c=a & b;
if(max<c)
max=c;
      }
    }
}
cout<<max<<endl;
}





}