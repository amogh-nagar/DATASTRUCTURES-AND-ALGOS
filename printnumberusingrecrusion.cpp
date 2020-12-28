#include<bits/stdc++.h>
using namespace std;
void printdecrecrusion(int n){
    if(n==0)
    return ;

    cout<<n<<endl;
    printdecrecrusion(n-1);
}
void printincrecrusion(int n){
    if(n==0)
    return ;

    printincrecrusion(n-1);
cout<<n<<endl;
}
int main()
{
    // printdecrecrusion(5);
    printincrecrusion(5);
    return 0;
}