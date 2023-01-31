// Keep Multiplying Found Values by Two   Leetcode 2154   @devottam2809


class Solution {
    public int findFinalValue(int[] nums, int original) {
        int i=0;
        while(i<nums.length)
        {
            if(original==nums[i])
            {
                original*=2;
                i=0;
            }
            else
                i++;
        }
        return original;
    }
}
