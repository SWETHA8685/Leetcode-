class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
    sort(nums.begin(),nums.end());
    set<vector<int>>st;
    int i,j,k;
    for(i=0;i<nums.size();i++)
    {
        for(j=i+1;j<nums.size();j++)
         
        {
            unordered_set<long long>s;
            for(k=j+1;k<nums.size();k++)
            {
                
               long long m=(long long)target-nums[i]-nums[j]-nums[k];
               if(s.count(m))
               {
                st.insert({nums[i],nums[j],int(m),nums[k]});
               }
               s.insert(nums[k]);
            }

        }
    }
    return vector<vector<int>>(st.begin(),st.end());
}
};