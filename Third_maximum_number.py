# Third maximum number    Leetcode 414    @devottam2809
class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = list(set(nums))
        res.sort(reverse=True)
        if(len(res)>=3):
            return res[2]
        return res[0]
        
