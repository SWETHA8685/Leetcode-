class Solution {
    public boolean isPalindrome(int x) {
        int sum=0;
        if(x<0){
            return false;
        }
     int temp=x;
    while(x!=0)
        {
            int m=x%10;
            sum=m+sum*10;
            x=x/10;
        }
        if(temp==sum){
            return true;
        }
        else
        {
            return false;
        }
    }
}