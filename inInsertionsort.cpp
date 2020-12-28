#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the insertionSort2 function below.
void insertionSort2(int n, int arr[]) {
int key,i,j;
for(int i=1;i<n;i++)
{
    key=arr[i];
    for(int j=i-1;j>=0 && key<arr[j];j--)
    {arr[j+1]=arr[j];
    
    arr[j]=key;}
    for(int l=0;l<n;l++)
    cout<<arr[l]<<" ";
    
    cout<<endl;
}

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    insertionsort2(n,a);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
