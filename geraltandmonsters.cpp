#include<iostream>
using namespace std;
int main(){
string x[20];
cin>>x;
int key;
for(int i=2;i<x.length();i++)
{
    key=(int)x[i]-(int)'0';
    for(int j=i-2;j>=0 && key<x[j]-'0';j--)
    {
        x[j+2]=x[j];
        x[j]=key;
    }
}
cout<<x;






    return 0;
}