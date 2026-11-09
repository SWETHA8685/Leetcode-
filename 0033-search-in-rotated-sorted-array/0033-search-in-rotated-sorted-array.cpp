class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n=nums.size()-1;
        int f=0;
        int l=n;
        while(f<=l)
        {
          int mid=f+(l-f)/2;
          if(nums[mid]==t)
          {
            return mid;
          }
          
          if(nums[l]<nums[mid])
          {
            if(t>=nums[f] && t<nums[mid])
            {
                l=mid-1;

            }
            else
            {
                f=mid+1;
            }
          }
          else
          {
            if(t<=nums[l] && t>nums[mid])
            {
                f=mid+1;
            }
            else
            {
              l=mid-1;
            }
          }
        }
        return -1;
    }
};