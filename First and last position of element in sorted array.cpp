// Leetcode 34

class Solution {
private:
    int first(vector<int>&nums,int target){
        int result=-1;
        int l=0;
        int r=nums.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(target==nums[mid]){
            result=mid;
            r=mid-1;
        }
        else if(target<nums[mid])
            r=mid-1;
        else if(target>nums[mid])
            l=mid+1;
    }
return result;
    }
    
    int last(vector<int>&nums,int target){
        int result=-1;
        int l=0;
        int r=nums.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(target==nums[mid]){
            result=mid;
            l=mid+1;
        }
        else if(target<nums[mid])
            r=mid-1;
        else if(target>nums[mid])
            l=mid+1;
    }
return result;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a,b;
        a=first(nums,target);
        b=last(nums,target);
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);
    return ans;
    }
};
