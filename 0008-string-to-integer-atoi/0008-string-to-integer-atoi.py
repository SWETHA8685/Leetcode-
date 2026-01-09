class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        sign=1
        s=s.strip()
        if not s:
            return 0
        i=0
        num=0
        if s[i]=='-':
            sign=-1
            i=1
        elif s[i]=='+':
             i=1
        while i<len(s) and s[i].isdigit():
            num=num*10+int(s[i])
            i=i+1
        num=sign*num
        int_min=-2**31
        int_max=2**31-1
        if num<int_min:
            return int_min
        if num>int_max:
            return int_max   
        return num

        