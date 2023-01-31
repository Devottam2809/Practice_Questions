// Find Greatest Common Divisor of Array    LeetCoden 1979    @devottam2809

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        int t=__gcd(mini,maxi);
    return t;
    }
};
