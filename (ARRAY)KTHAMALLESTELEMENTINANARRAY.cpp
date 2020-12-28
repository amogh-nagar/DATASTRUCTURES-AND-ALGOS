// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int *, int, int, int);
 
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}// } Driver Code Ends


//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function

void insert(int a[],int x){
    int i=x,t=a[x];
    while(i>0 && t>a[i/2]){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=t;
}
void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void deletea( int a[],int n){
    int val=a[0],t=a[n];
    a[0]=a[n];
    a[n]=val;
    
    int i=0,j=2*i;
    while(j<=n-1){
        if(j<n-1 && a[j+1]>a[j])
        j=j+1;
        if(a[j]>a[i])
        {
            swap(&a[i],&a[j]);
            i=j;
            j=2*j;
        }
        else
        break;
    }
}

int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    for(int i=l;i<=r;i++){
        insert(arr,i);
    }
    for(int i=r;i>l;i--){
        deletea(arr,i);
    }
   return arr[k-1];
}