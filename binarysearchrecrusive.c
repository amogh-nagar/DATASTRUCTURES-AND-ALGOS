#include<stdio.h>
#include<conio.h>
int binaryrecrusive(int a[],int key,int n,int l,int u){
    int m=(l+u)/2;
    if(l<=u){
    if(key==a[m])
    return 1;
    else if(key<a[m])
    return binaryrecrusive(a,key,n,l,m-1);
    else if(key>a[m])
    return binaryrecrusive(a,key,n,m+1,u);
    }
return 0;
}
void main(){
    int key,n,res;
// printf("Enter size of array");
// scanf("%d",&n);
// printf("Enter elements");
// for(int i=0;i<n;i++)
// scanf("%d",&a[i]);
int a[]={1,2,3,4,5};
printf("Enter element to be serached");
scanf("%d",&key);
n=5;
res=binaryrecrusive(a,key,n,0,n-1);
if(res==0)
printf("Not found");
else 
printf("found");
}