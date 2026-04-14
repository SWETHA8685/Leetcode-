class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>st={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()-1 && st[s[i]]<st[s[i+1]])
             res-=st[s[i]];
            else
             res+=st[s[i]];
        }

        return res;
    }
};