# Median of Two Sorted Arrays @devottam 2809

class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums1.extend(nums2)
        nums1.sort()
        n=len(nums1)
        sum=0
        if(n%2==0):
            sum = sum + nums1[(n/2)] + nums1[(n/2)-1]
            return sum/2.0
        else:
            sum = sum + nums1[n/2]
            return sum 
        
