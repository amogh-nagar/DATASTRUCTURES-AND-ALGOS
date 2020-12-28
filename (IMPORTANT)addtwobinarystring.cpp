class Solution {
public:
    string addBinary(string a, string b) {
        int k=0,carry=0,sum=0,n=a.length(),m=b.length();
        string x="";
        for(int i=n-1,j=m-1;i>=0 || j>=0 ||sum==1;i--,j--){
            
           sum=sum+((i>=0)? (a[i]-'0'):0);
            sum=sum+((j>=0)? (b[j]-'0'):0);
            x=to_string(sum%2)+x;
            
            sum/=2;
        }
        return x;
    }
};