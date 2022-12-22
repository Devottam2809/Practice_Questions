// Leet Code 162
// Find Peak Element @devottam2809

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++)
            m=max(m,nums[i]);
        int t;
    for(int i=0;i<nums.size();i++)
        if(nums[i] == m)
            t=i;
    return t;
    }
};
