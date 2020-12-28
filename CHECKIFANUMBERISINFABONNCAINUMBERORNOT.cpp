#include <bits/stdc++.h>

using namespace std;

bool isper(long long int x){
   long long int   s=sqrt(x);
    //  s=sqrt(x);
    return (s*s)==x;
}
// Complete the solve function below.
string solve(long n) {

// long long int x=,y=;
// x=sqrt(x);
// y=sqrt(y);
if((isper(5*n*n+4)) || (isper(5*n*n-4)))
return "IsFibo";
else
return "IsNotFibo";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
