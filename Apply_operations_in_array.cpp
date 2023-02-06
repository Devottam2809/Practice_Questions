// Apply operations in array      Leetcode 2460     @devottam2809

class Solution {
public:

    vector<int> applyOperations(vector<int>& nums) {
    int counter=0;
    vector<int>ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
            counter++;
        else
            ans.push_back(nums[i]);
    }
    while(counter--)
        ans.push_back(0);
return ans;
    }
};
