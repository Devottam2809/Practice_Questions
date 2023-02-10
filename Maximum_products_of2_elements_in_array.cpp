// Maximum products of 2 elements in array    Leetcode 1464   @devottam2809

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        return (nums[0]-1) * (nums[1]-1); 
    }
};
