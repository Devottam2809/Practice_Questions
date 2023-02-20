// How Many Numbers Are Smaller Than the Current Number   Leetcode 1365   @devottam2809

class Solution {
public:
int solve(vector<int>&nums,int target)
{
    int counter=0;
    for(int i=0;i<nums.size();i++)
    {
        if(target > nums[i])
            counter++;
    }
return counter;
}
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int c=solve(nums,nums[i]);
            ans.push_back(c);
        }
    return ans;
    }
};
