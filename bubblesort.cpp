#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
temp=*x;
*x=*y;
*y=temp;
}

void bubble(int a[],int n)
{
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
if(a[j]>a[j+1])
{
    flag=1;
    swap(&a[j],&a[j+1]);
}
        }
        if(flag==0)
        break;
    }
}
    
    int main()
{
    int a[]={8,7,5,6,4,15,3,1,2},n=9;

bubble(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";

    return 0;
}