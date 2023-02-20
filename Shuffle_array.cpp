// Shuffle array    Leetcode 1470   @devottam2809

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]<<10;
            nums[i]=nums[i] | nums[i+n];
        }
        int mask=1023;
        int j=2*n-1;
        for(int i=n-1;i>=0;i--)
        {
            nums[j--]=mask & nums[i];
            nums[j--]=nums[i]>>10;
        }
    return nums;
    }
};
