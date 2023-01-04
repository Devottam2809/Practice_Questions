// Leetcode 268 Missing Number @devottam2809

// Method 1 (using XOR)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int sum=1;
	for(int i=1;i<=nums.size();i++)
		sum^=i;
    int sum2=1;
    for(int i=0;i<nums.size();i++)
        sum2^=nums[i];
    return sum^sum2;
    }
};

// Method 2 (using sum of n natural numbers)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sn=n * (n+1)/2;
    int sa=0;
    for(int i=0;i<nums.size();i++)
        sa+=nums[i];
    return sn - sa;    
    }
};
