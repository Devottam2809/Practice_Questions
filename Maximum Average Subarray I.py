# Leetcode 643  Maximum Average Subarray I
class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        k=float(k)
        sum=0
        i=0
        j=0
        ans=[]
        n=len(nums)
        while(j<n):
            sum+=nums[j]
            if(j-i+1<k):
                j+=1
            elif(j-i+1==k):
                ans.append(sum/k)
                sum-=nums[i]
                i+=1
                j+=1
        return max(ans)
            
