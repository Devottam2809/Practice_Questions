// Find Numbers with Even Number of Digits  LeetCode 1295   @devottam2809
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter=0;
        for(int i=0;i<nums.size();i++)
        {
            string p=to_string(nums[i]);
            if(p.length()%2==0)
                counter++;
        }
    return counter;
    }
};
