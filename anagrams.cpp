#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
int a[26]={0};

int c=0;
for(int i=0;s1[i]!='\0';i++)
{
    a[s1[i]-'a']++;
}
for(int i=0;s2[i]!='\0';i++)
{
    a[s2[i]-'a']--;
}

for(int i=0;i<26;i++)
{
    c+=abs(a[i]);

}


return c;
}


int main()
{
   string s1,s2;
   cin>>s1;
   cin>>s2;
  cout<<"\n"<<makingAnagrams(s1,s2);

    return 0;
}
