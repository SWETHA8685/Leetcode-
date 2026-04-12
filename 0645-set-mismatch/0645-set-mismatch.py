class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        k=[]
        d=-1
        
        for i in nums:
            if i not in k:
                k.append(i)
            else:
                d=i
        for i in range(1,len(nums)+1):
            if i not in k:
                m=i
        return [d, m]
