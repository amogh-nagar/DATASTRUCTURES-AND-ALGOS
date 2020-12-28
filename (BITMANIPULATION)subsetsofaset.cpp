#include<iostream>
using namespace std;
int findaunique(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum^=a[i];
    }
    return sum;
}


void subsets(char a[],int n)
{
    for(int i=0;i<1<<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & 1<<j)
            cout<<a[j];
        }
        cout<<endl;
    }
}
int main()
{


    
    char a[]={'a','b','c'};
    int n=3;
    
subsets(a,n);

    return 0;
}