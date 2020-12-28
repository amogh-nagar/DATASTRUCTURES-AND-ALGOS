#include <iostream>
using namespace std;
int copy(int x,int y,int l,int r){
    for(int i=0;i<32;i++){
        int sum=0,v=1<<i;
        if((x & v)>0)
        sum++;
        if((y & v)>0)
        sum++;
        
        if(sum==1 && (i>=l-1 && i<=r-1))
        {
            x=x|1<<i;
        }
    }
    return x;
}


int main() {
// 	cout<<"GfG!";
// int x=,y,l,r;

cout<<copy(8,7,1,2);
	return 0;
}