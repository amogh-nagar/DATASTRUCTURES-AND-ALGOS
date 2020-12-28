#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> x;
    int k;
    // regex a(".+@gmail.com$");
    regex a(".+@gmail.com$");
    for(int i=0;i<N;i++)
    {
        string f,id;
        cin>>f>>id;
        if(regex_match(id,a))
        x.push_back(f);

    }
    k=x.size();
    sort(x.begin(),x.end());
    for(int i=0;i<k;i++)
    cout<<x[i]<<endl;
}
