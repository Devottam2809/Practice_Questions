# 461 Leetcode Hamming Distance   @devottam2809

class Solution(object):
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        n=x^y
        counter=0
        while(n):
            n&=(n-1)
            counter+=1
        return counter  
