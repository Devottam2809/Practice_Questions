// Find All Numbers Disappeared in an Array       Leetcode 448    @devottam2809

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++)
        {
            if(!binary_search(begin(nums),end(nums),i))
                ans.push_back(i);
        }
    return ans;
    }
};
