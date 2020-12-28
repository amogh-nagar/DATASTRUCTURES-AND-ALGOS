#include<bits/stdc++.h>
using namespace std;
bool tocheck(int n)
{
    return (n && !(n & n-1));
}

int main()
{
int n=8;
if(tocheck(n))
cout<<"YEs";

else
{
    cout<<"NO";
}

    return 0;
}