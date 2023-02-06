// Squares of a sorted array      Leetcode 977      @devottam2809
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
    sort(ans.begin(),ans.end());
    return ans;
    }
};
