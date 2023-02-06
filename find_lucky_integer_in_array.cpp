// find lucky integer in array      leetcode 1394     @devottam2809

class Solution {
public:
    int findLucky(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        for(auto itr=mp.rbegin();itr!=mp.rend();itr++)
        {
            if(itr->first==itr->second)
                return itr->first;
        }
return -1;
    }
};
