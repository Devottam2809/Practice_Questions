// set Mismatch     Leetcode 645    @devottam2809

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());

        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;

        for(auto it=umap.begin();it!=umap.end();it++)
        {
            if(it->second==2)
                ans.push_back(it->first);
        }

        for(int i=1;i<=nums.size();i++)
        {
            if(!binary_search(begin(nums),end(nums),i))
                ans.push_back(i);
        }
return ans;
    }
};
