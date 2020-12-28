#include<stdio.h>
#include<stdlib.h>

void prem(char s[],int k){
    static int A[10]={0};
    static char Res[10];
if(s[k]=='\0')
{
    Res[k]='\0';
  static int i=1;

    
    printf("%d. %s\n",i,Res);
    i++;
}
else{

for(int i=0;s[i]!='\0';i++)
    {
        if(A[i]==0)
        {
            Res[k]=s[i];
            A[i]=1;
            prem(s,k+1);
            A[i]=0;
        }
    }
}
}
void main(){
    char *s="ABC
    
    
    ";
    prem(s,0);
}