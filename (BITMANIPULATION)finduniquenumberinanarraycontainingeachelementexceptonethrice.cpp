#include<iostream>
using namespace std;
int unique(int a[],int n){
   int res=0;
   for(int i=0;i<64;i++)
   {
       int sum=0;
       for(int j=0;j<n;j++)
       {
           if((a[j] & 1<<i)>0)
           sum++;
           
       }
       if(sum%3!=0){
           res=res|1<<i;
       }
   }
    return res;
    
}


int main()
{
//     char a[]={'a','b','c'};
//     int n=3;
    int a[]={1,3,2,3,4,4,4,5,2,1,1,3,2};
    // cout<<find2unique(a,5);
// subsets(a,n);
cout<<unique(a,10);
    return 0;
}