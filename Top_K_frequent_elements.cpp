// Leetcode 347 Top K frequent Elements      @devottam2809

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        for(auto i:nums)
            umap[i]++;
        
        priority_queue<pair<int,int>>pq;
        for(auto i:umap)
            pq.push({i.second,i.first});

        vector<int>ans;
        while(k-- && !pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
return ans;
    }
};
