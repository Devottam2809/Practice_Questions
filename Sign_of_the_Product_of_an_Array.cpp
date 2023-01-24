# Sign of the Product of an Array  1822 Leetcode    @devottam2809

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int counter=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                return 0;
            if(nums[i]<0)
                counter++;
        } 
    if((counter&1)!=0)
        return -1;
    return 1;
    }
};
