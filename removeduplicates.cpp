#include<bits/stdc++.h>
using namespace std;
// string x;
string remove(string s){
    if(s.length()==0)
    return "";
char x=s[0];
string ans=remove(s.substr(1));
if(x==ans[0]){
   return ans;
}


    return x+ans;


}
int main(){

cout<<remove("aaabbbccdd");

    return 0;
}