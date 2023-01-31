//  Average Value Of Even Numbers That are Divisible by three   LeetCode 2455

class Solution {
public:
    int averageValue(vector<int>& nums) {
        int counter=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]%2)==0 && (nums[i]%3)==0)
            {
                sum+=nums[i];
                counter++;
            }
        }
    return counter?sum/counter:0;
    }
};
