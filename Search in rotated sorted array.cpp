// Leetcode 33

class Solution {
private:
    int bin(int l,int h,vector<int>&nums,int target){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                h=mid-1;
            else if(target>nums[mid])
                l=mid+1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int idx;
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<m){
                m=nums[i];
                idx=i;
            }
        }
        cout<<idx;
        int a=bin(0,idx-1,nums,target);
        int b=bin(idx,nums.size()-1,nums,target);
        if(b==-1)
            return a;
        else if(a==-1)
            return b;
    return -1;
    }
};
