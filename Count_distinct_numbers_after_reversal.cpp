// Count distinct numbersal after reversal      Leetcode 2442   @devottam2809

class Solution {
public:
int rev(int n)
{
    int ans=0;
    while(n)
    {
        int temp=n%10;
        ans=ans*10+temp;
        n/=10;
    }
return ans;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>uset;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>9)
            {
                int t=rev(nums[i]);
                uset.insert(t);
            }
        uset.insert(nums[i]);
        }
    return uset.size();
    }
};
