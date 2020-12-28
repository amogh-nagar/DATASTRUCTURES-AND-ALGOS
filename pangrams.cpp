int a[26]={0};
for(int i=0;x[i]!='\0';i++)
{
   if(x[i]>='a' && x[i]<='z')
    a[x[i]-'a']++;
    
}
int g=0;
for(int i=0;i<26;i++)
{
    if(a[i]==0)
    {g=-1;
        break;
    }
    else
    {
        g++;
    continue;
    }
    #include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
void pangrams(string s) {
string x;
 transform(s.begin(), s.end(), s.begin(), ::tolower); 
// int l=0,j=0;
// while(s[l]!='\0')
// {
//     if(s[l]!=' ')
//    { x[j++]=s[l];
//    }
//     l++;
// }
cout<<s;

// if(g==-1)
// return "not pangram";
// else
// return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

     pangrams(s);

    // fout << result << "\n";

    fout.close();

    return 0;
}
