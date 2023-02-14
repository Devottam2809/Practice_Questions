// Count number of pairs with absolute diffrence K    Leetcode 2006   @devottam2809

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
    int counter=0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(abs(nums[i]-nums[j])==k)
                counter++;
        }
    }  
return counter;
    }
};
