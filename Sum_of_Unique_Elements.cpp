// Leetcode 1748     Sum of Unique Elements   @declass Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>umap;
        int sum=0;
        for(auto i:nums){
            umap[i]++;
        }
        for(auto i: umap){
            if(i.second==1)
                sum+=i.first;
        }
    return sum;
    }
};
