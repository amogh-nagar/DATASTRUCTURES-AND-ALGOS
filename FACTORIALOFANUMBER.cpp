// C++ program to demonstrate working of rotate
#include <bits/stdc++.h>
using namespace std;

long long int f[20];
int factorial(int n){
    f[0]=1;
    for(int i=1;i<=n;i++){
     f[i]=f[i-1]*i;   
    }
    return f[n];
}

int main()
{
cout<<factorial(5);

    return 0;
}
