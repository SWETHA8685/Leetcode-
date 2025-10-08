class Solution {
    public int reverse(int x) {
       long sum=0;
             while (x!=0)
             {
                 int m=x%10;
                  sum=m+sum*10;
                 x=x/10;
                 
                 
             }
        if(sum<Integer.MIN_VALUE ||sum> Integer.MAX_VALUE)
        {
            return 0;
        }
        return (int)sum;
    }
}