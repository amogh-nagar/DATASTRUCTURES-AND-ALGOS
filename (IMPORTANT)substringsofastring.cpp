// "ABC"
// ->"","A","B","AB","C","AC","BC","ABC"
#include<bits/stdc++.h>
using namespace std;

void substring(string s,string ans){
    if(s.length()==0)
   { cout<<ans<<endl;
    return;
   }

    
    char c=s[0];
    string res=s.substr(1);

substring(res,ans);

substring(res,ans+c);

}
int main(){
    substring("ABC","");
    return 0;
}