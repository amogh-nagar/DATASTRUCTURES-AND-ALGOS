#include <iostream>
#include <vector>

using namespace std;



void display(vector<int> v){
for(int i=0;i<v.size();i++)
cout<<v[i];

cout<<endl;
}


int main(){
   vector<int> v(3,7);
   vector<int> v1(4,5);
//    v1.swap(v);
v.pop_back();
//   vector<int>:: iterator iter=v.begin();
//    v.insert(iter+1,6);
    display(v);
    // display(v1);
    // v.erase(v.begin()+3);
    // display(v);
    // v.erase(v.begin(),v.begin()+1);
    // display(v);
return 0;
}