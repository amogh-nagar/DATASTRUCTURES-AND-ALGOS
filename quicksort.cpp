#include<iostream>
using namespace std;

// NLOG2(N)

void swap(int *x,int *y)
{
    int temp;
temp=*x;
*x=*y;
*y=temp;
}
void display(int a[],int n)
{
for(int i=0;i<n;i++)
cout<<a[i]<<" ";


cout<<"\n";
}

// PARTITIONING PROCEDURE
int partition(int a[],int l,int h)
{
    int i=l,j=h;
    int pivot=a[l];
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)

{
        swap(&a[i],&a[j]);
        display(a,6);
       }   }while(i<j);
swap(&a[j],&a[l]);

return j;

}




void quicksort(int a[],int l,int h){
    int j;
    if(l<h)
    {
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}

int main()
{
int a[]={50,30,60,15,5,70}, n=6;
quicksort(a,0,n);
display(a,n);

    return 0;}