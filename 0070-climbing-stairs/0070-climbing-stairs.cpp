class Solution {
public:
    int climbStairs(int n) {
      
      int f=1;
      int s=2;
       if(n<=2)
       {
        return n;
       }
      else
      {
        for(int i=3;i<=n;i++)
        {
            int third=f+s;
            f=s;
            s=third;
          
        }
      }
      return s;
        
    }
};