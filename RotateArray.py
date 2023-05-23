# Leetcode 189 Rotate array @devottam2809

class Solution(object):
    global revi
    def revi(nums,low,high):
        while(low<high):
            nums[low],nums[high]=nums[high],nums[low]
            low+=1
            high-=1
    
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        k=k%n
        revi(nums,0,n-k-1)
        revi(nums,n-k,n-1)
        revi(nums,0,n-1)
