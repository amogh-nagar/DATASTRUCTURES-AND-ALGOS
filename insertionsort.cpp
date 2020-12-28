#include<iostream>
using namespace std;  
  void insert(int a[],int n){
      int x,j,f;
      for(int i=1;i<n;i++)
      {
    
          x=a[i];
          for(int j=i-1;j>=0 && a[j]>x;j--)
{
    
    a[j+1]=a[j];
a[j]=x;
}



      }
  }
  int main()
{
    int a[]={8,7,5,6,4,15,3,1,2},n=9;

insert(a,n);
for(int i=0;i<n;i++)
cout<<a[i]<<" ";

    return 0;
}