// Leetcode 2215    Find the Difference of Two Arrays   @devottam2809

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        
        vector<int>temp1;
        vector<int>temp2;
        
        unordered_map<int,int>umap1;
        for(auto i: nums1)
                umap1[i]++;
        
        unordered_map<int,int>umap2;
            for(auto i: nums2)
                umap2[i]++;
        
        for(auto i: umap1){
            if(umap2.find(i.first)==umap2.end())
                temp1.push_back(i.first);
        } 
        
        for(auto i: umap2){
            if(umap1.find(i.first)==umap1.end())
                temp2.push_back(i.first);
        }
        
        ans.push_back(temp1);
        ans.push_back(temp2);
    return ans;
    }
};
