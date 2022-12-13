// Leet Code 75
//Sort Colors (Leet Code) @devottam2809

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
            cout<<nums[i];
    }
};
