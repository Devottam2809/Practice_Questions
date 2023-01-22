// Minimum Common Value Leetcode 6300 @devottam2809
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //set<int>s;
        int n=nums1.size();
        int m=nums2.size();
        int ptr1=0;
        int ptr2=0;
        while(ptr1<n && ptr2<m)
        {
            if(nums1[ptr1] < nums2[ptr2])
            {
                ptr1++;
            }
            else if(nums2[ptr2] < nums1[ptr1])
            {
                ptr2++;
            }
            else{
                //s.insert(nums2[ptr2]);
                return nums2[ptr2];
                ptr1++;
                ptr2++;
            }
        }
    return -1;
    }
};
