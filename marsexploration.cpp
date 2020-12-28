#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
int c=0,a[26]={0};
// for(int i=0;s[i]!='\0';i+=3)
// {
// if(s[i]!='S')
//   c++;
//   if(s[i+1]!='O')
//   c++;
//   if(s[i+2]!='S')
//   c++;
int n=s.length()/3,k=0;
char c[]="SOS";
for(int i=0;s[i]!='\0';i++)
{
    if(c[i]!=s[i])
    k++;
}


return k;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
