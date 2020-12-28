#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
int min(int x,int y){
    if(x<y)
    return x;
    
    return y;
}
int max(int x,int y){
    if(x>y)
    return x;
    
    return y;
}
// Complete the solve function below.
int gcd(int a,int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(a==b)
    return a;
    if(a>b)
    return gcd(a-b,b);
    
    return gcd(a,b-a);
}
int solve(int x1, int y1, int x2, int y2) {

// float m=(float)(y2-y1)/(x2-x1);
// float y;
// int c=0;
// for(int i=min(x1,x2)+1;i<max(x1,x2);i++){
//     y=m*(i-x1)+y1;
//     if((int)y==y)
//     {
        
//         c++;
//     }
// }
return gcd(abs(x2-x1),abs(y2-y1))-1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string x1Y1X2Y2_temp;
        getline(cin, x1Y1X2Y2_temp);

        vector<string> x1Y1X2Y2 = split_string(x1Y1X2Y2_temp);

        int x1 = stoi(x1Y1X2Y2[0]);

        int y1 = stoi(x1Y1X2Y2[1]);

        int x2 = stoi(x1Y1X2Y2[2]);

        int y2 = stoi(x1Y1X2Y2[3]);

        int result = solve(x1, y1, x2, y2);

        fout << result << "\n";
    }

    fout.close();

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
