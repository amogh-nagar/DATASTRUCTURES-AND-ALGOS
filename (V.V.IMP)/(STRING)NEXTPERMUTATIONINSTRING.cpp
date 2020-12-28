// C++ program to demonstrate working of rotate
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "AB";
    
    // Rotating arround second element
    // string becomes "BCDA"
  if(next_permutation(s.begin(),s.end())){
      cout<<s<<endl;
  }
  else{
      cout<<"No such string possible"<<endl;
  }

    return 0;
}
