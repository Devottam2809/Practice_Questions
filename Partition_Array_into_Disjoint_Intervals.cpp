// Leetcode 915 Partition Array into Disjoint Intervals

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int lmax=nums[0];
        int parIDX=0;
        int maxi=lmax;

        for(int i=0;i<nums.size();i++){
            if(lmax>nums[i]){
                parIDX=i;
                lmax=maxi;
            }
            else{
                maxi=max(maxi,nums[i]);
            }
        }
    return parIDX+1;
    }
};
