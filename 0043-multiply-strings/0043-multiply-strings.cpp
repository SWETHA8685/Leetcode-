class Solution {
public:
    string multiply(string num1, string num2) {
        int m=num1.size();
        int n=num2.size();
        vector<int>result(m+n,0);
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int a=num1[i]-'0';
                int b=num2[j]-'0';
                int mul=a*b;
                int sum=mul+result[i+j+1];
                result[i+j+1]=sum%10;
                result[i+j]+=sum/10;
            }
        }
        string ans="";
        for(int digit:result)
        {
            if(digit==0 && ans.empty())
            {
                continue;
            }
            ans=ans+to_string(digit);
        }
        return ans.empty() ? "0":ans;
    }
};