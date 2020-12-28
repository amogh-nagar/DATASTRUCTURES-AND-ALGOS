#include <bits/stdc++.h>

using namespace std;
typedef long l;
bool poweroftwo(long n){
    int count=0;
    while(n){
        count+=n&1;
        n=n>>1;
    }
   return count==1;
} 
// Complete the counterGame function below.
string counterGame(l n) {
int max=-32767,x=1,i=0;
while(n>1){
    if(poweroftwo(n)){
        n/=2;
    }
    else{
        while(x<n){
            if(max<x)
            {
                max=x;
                x=x<<1;
                
            }
        }
        n=n-max;
    }
    i++;
}
if(i%2==0)
return "Louise";
else
return "Richard";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n,t;
    cin >> t;
  for(int i=0;i<t;i++){
cin>>n;
cout<<poweroftwo(n);
  }

    return 0;
}
