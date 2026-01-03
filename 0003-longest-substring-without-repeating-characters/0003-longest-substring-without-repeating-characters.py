class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        seen=[]
        maxleng=0
        leng=len(s)
        for i in s:
            if i not in seen:
                seen.append(i)
            else:
                seen=seen[seen.index(i)+1:]
                seen.append(i)
            maxleng=max(maxleng,len(seen))    
        return maxleng       
        