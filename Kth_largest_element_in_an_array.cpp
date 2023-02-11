// Kth largest element in an array    Leetcode 215    @devottam2809

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
    //int n=nums.size();
    return nums[k-1];
    }
};
