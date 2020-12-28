     #include <iostream>
#include <sstream>
#include<string>
using namespace std;
class Student{
    int age;
    string first_name;
    string last_name;
    int standard;
    public:
void main(){string s;
        stringstream ss;
        ss>>age>>first_name>>last_name>>standard;
        s=ss.str();
        return s;}
         char ch=',';
        stringstream ss;
        ss>>age>>ch>>first_name>>ch>>last_name>>ch>>standard;
       
        return ss.str();