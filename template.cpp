#include<iostream>
#include<vector>
using namespace std;
template < class T=int>

// T sum(T a,T b){
//     return a+b;
// }

 class rem{
 public: T data;
 void ret(T a){
 data=a;
 }
 void display(){
     cout<<"element is "<<data;
 }
 };

int main(){
     rem<float> r;
     r.ret(2.4);
     r.display();

    cout<<sum<float>(3.2,4.5);
return 0;}