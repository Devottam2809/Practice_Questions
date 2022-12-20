// Leet code 137
// Single Number 2 @devottam2809

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int t;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
    
    for (auto x : mp)
        {
            if(x.second == 1)
                t=x.first;
        }
    return t;
    }
};
