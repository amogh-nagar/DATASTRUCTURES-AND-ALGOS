#include<iostream>
using namespace std;
void find2unique(int a[],int n){
    int sum=0;
    int setbit=1,pos=0;
    int xorsum=0,x=1<<pos-1;
    for(int i=0;i<n;i++){
        sum^=a[i];
    }
    
    while(setbit!=1){
        setbit=setbit^sum;
        pos++;
        sum=sum>>1;
    }
    
    for(int i=0;i<n;i++){
        if(a[i] & x >0)
        {
            xorsum+=xorsum^a[i];
        }
    }
    cout<<xorsum<<endl;
    cout<<xorsum ^ sum;
}
int main()
{
//     char a[]={'a','b','c'};
//     int n=3;
    int a[]={2,4,6,7,4,5,6,2};
    cout<<find2unique(a,5);
// subsets(a,n);

    return 0;
}