// Difference Between Element Sum and Digit Sum of an Array   Leetcode 2535   @devottam2809

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            while(nums[i]!=0)
            {
                int rem=nums[i]%10;
                sum2+=rem;
                nums[i]/=10;
            }
        }
    return abs(sum1 - sum2);
    }
};
