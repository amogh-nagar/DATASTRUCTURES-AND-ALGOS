#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
stack<int> s1,s2;
void enqueue()

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        switch(x)
        {
            case 1: cin>>y;
                    s1.push(y);break;
            case 2: while(!s1.empty())
                    {
                        s2.push(s1.top());
                        s1.pop();
                    } 
                    s2.pop();
                     while(!s2.empty())
                     {
                         s1.push(s2.top());
                         s2.pop();
                     }
                          break;
             case 3: while(!s1.empty())
                     {
                       s2.push(s1.top());
                             s1.pop();
                     }
                    cout<<s2.top()<<"\n";
                     while(!s2.empty())
                     {
                         s1.push(s2.top());
                         s2.pop();
                    }
                    break;
        }
    }
    return 0;
}
