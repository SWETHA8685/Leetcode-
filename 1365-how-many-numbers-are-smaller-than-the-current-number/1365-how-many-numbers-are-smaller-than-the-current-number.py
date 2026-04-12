class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        k=[]
        for i in nums:
            c=0
            for j in nums:
                if(i>j):
                    c=c+1
            k.append(c)
        return k
        