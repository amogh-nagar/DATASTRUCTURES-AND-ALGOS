#include<iostream>
using namespace std;
bool tocheck(int n)
{
    return (n && !(n & n-1));
}

int count1(int n){
    int c=0;
    
    while(n!=0){
        n=n&n-1;
        c++;
    }
    
    return c;

}

int main()
{
cout<<count1(7);

    return 0;
}