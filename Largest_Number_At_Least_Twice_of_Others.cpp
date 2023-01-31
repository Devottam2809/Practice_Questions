// Largest Number At Least Twice of Others    Leetcode 747    @devottam2809

class Solution {
    public int dominantIndex(int[] nums) {
        int maxi=-1;
        int index=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                index=i;
            }
        }

        int counter=0;
        for(int i=0;i<nums.length;i++)
        {
            if((nums[i]*2) <= maxi && nums[i]!=maxi)
                counter++;
        }
        if(counter==nums.length-1)
            return index;
    return -1;
    }
}
