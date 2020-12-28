#include <bits/stdc++.h>
using namespace std;

 void perm(string s,string  k){
    if(s.length()==0)
    {
        cout<<k<<" ";
        return;
    }
    

        for(int i=0;i<s.length();i++){
            perm(s.substr(1),k+s[0]);
            
            rotate(s.begin(),s.begin()+1,s.end());

    }

}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	   // string res,x;
	    string x;
	    cin>>x;
	   
	    perm(x,"");
	 
	
	}
	return 0;
}