class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        num4=nums1+nums2
        num4.sort()
        length=len(num4)
        leng=length//2
        if(leng)%2==0:
            mid=(num4[leng]+num4[leng-1])/2.0
            return mid
        else:
            mid=float(num4[leng])
            return mid
           
