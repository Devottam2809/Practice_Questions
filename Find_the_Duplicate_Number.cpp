// Leetcode 287 Find the Duplicate Number @devottam2809

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int element;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        if((nums[i]^nums[i+1]) == 0) 
        {
            element = nums[i];
            break;
        }
        else
            continue;
    }
    return element;
    }   
};
