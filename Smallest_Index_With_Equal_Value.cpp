// Leetcode 2057 Smallest Index With Equal Value    @devottam2809

class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if((i%10) == nums[i])
                return i;
        }
    return -1;
    }
};
