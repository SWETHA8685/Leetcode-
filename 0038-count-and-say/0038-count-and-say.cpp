class Solution {
public:
    string countAndSay(int n) {
        int i=0;
        string s="1";
        for(int i=1;i<n;i++)
        {
            string ans="";
           for(int j=0; j<s.size();)
           {
            int c=1;
            while(j+1<s.size() && s[j]==s[j+1])
            {
                c++;
                j++;
            }
            ans+=to_string(c);
            ans+=s[j];
            j++;
           }
           s=ans;
        }
        return s;
        
    }
};