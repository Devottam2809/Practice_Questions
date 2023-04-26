// Top K Frequent Words     Leetcode 692      @devottam2809

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>umap;
        for(auto i: words){
            umap[i]++;
        }

        vector<string>ans;
        priority_queue<pair<int,string>>pq;
        for(auto x :umap)
            pq.push({-(x.second),x.first});

        while(pq.size()>k){
            pq.pop();
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
    
    return ans;
    }
};
