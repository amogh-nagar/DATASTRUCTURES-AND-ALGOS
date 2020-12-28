#include<stdio.h>


int lsearch(int [],int,int,int);
int main(void) {
 int  arr[]={3,5,2,8,6,8,3,8},key=8,s=0;

 
lsearch(arr,0,7,key);



   
  return 0;
}
int lsearch(int arr[], int i, int j, int key)
{
  int s=0;
  if(i>j){

return -1;
    
  }
   if(arr[i]==key){
      printf("%d",i+1);
     s= i+1;
     return lsearch(arr,s,j,key);
  }



 return lsearch(arr,i+1,j,key);
}