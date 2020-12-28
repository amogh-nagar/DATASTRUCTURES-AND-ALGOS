// #include<bits/stdc++.h>
// using namespace std;
#include<stdio.h>
#include<string.h>
char* movextolast(char s[]){
char c;
if(strlen(s)==0)
return "";

// if(s[0]=='x')
c=s[0];
char *ans=movextolast(s.substr(1));

if(c=='x')
return ans+c;

    return c+ans;


}

int main(){

printf("%s",movextolast("abxxcdx"));
return 0;
}