# Leet code 260
# single number 3 @devottam2809

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        vector<int>vec;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;;

        for(auto x: mp)
        {
            if(x.second == 1)
            {
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};
