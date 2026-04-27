class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        if(digits.empty())
        return{};
        vector<string>result;
        string curr="";
        backtrack(digits,0,"",result,mp);
        return result;
         }
         public :
         void backtrack(string &digits,int index,string curr,vector<string>&result,unordered_map<char,string>&mp)
         {
            if(index==digits.size())
            {
                result.push_back(curr);
                return;
            }
            string letter=mp[digits[index]];
            for(char ch:letter)
            {
                backtrack(digits,index+1,curr+ch,result,mp);
            }
         }

        
};