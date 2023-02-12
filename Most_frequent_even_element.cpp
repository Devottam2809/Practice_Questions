// Most frequent element even element     Leetcoe 2404 @devottam2809

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]%2)==0)
                mp[nums[i]]++;
        }
    int mxcount=0;
    int res=-1;
    for(auto i:mp)
    {
        if(mxcount<i.second)
        {
            res=i.first;
            mxcount=i.second;
        }
    }
return res;
    }
};
