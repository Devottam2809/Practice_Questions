# Intersection of Two Arrays Leetcode 349     @devottam2809

class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        return (set(nums1) & set(nums2))
