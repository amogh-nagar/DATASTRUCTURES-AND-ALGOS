#include<bits/stdc++.h>
using namespace std;
string x="";
void revstring(string s){
    if(s.length()==0)
    return;

    string res=s.substr(1);
    revstring(res);
x=x+s[0];
// cout<<s[0];

}
int main(){
string s="binod";
revstring(s);
cout<<x;
    return 0;
}