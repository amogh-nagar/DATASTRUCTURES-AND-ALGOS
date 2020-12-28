#include<iostream>

using namespace std;
int findmax(int a[],int n)
{
    int max=-32768;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        a[i]=max;
    }
    return max;
}
void countsort(int a[],int n)
{
    int max=findmax(a,n);
    int count[max+1]={0};
    // int *count;
    // count=(int*)malloc(sizeof(int)*(max+1));
    // for(int i=0;i<max+1;i++)
    // count[i]=0;
    for(int i=0;i<n;i++)
    count[a[i]]++;

    for(int i=0,j=0;i<max+1;)
    {
        if(count[i]>0)
        {
            a[j++]=i;
            count[i]--;
        }
        else
        {
            i++;
        }
        
    }
      for(int i=0;i<n;i++)
printf("%d " ,a[i]) ;
}

int main()
{
    int a[]={6,8,4,3,10,7,5,11,6},n=8;
    countsort(a,n);
  
   return 0;


}