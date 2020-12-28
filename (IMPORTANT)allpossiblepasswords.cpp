#include<bits/stdc++.h>
using namespace std;
//s->23
string keypad[]={"","abc","def","ghi","jkl","mno","pqs","tuv","wxyz",};
void passw(string s,string ans){
    if(s.length()==0){
cout<<ans<<endl;
return;
    }
    char c=s[0];
    string code=keypad[c-'0'];
string res=s.substr(1);

for (int i = 0; i < code.length(); i++)
{
    /* code */
    passw(res,ans+code[i]);
}

}
int main(){
passw("12","");
    return 0;
}


// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

