class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int l=0;
        int r=nums.size()-1;
        int s=0;
        sort(nums.begin(),nums.end());
        int c=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++)
        { 
        int l=i+1;
        int r=nums.size()-1;
            while(l<r)
            {  
                s=nums[i]+nums[l]+nums[r];
                if(s==t){
                    return s;
                }
                if(abs(s-t)<abs(c-t))
                {
                    c=s;
                }
                if(s<t)
                {
                    l++;
                }
                else if(s>t)
                {
                   r--;
               }
               
            }
           
        }
        return c;
    }
};