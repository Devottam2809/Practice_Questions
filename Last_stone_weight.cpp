// Last Stone Weight    Leetcode 1046     @devottam2809

class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
        //int n=pq.size();
        while(pq.size()!=1)
        {
            int diff;
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            
            if(x>=y)
            {
                diff=x-y;
                pq.push(diff);
            }
        }
    return pq.top();
    }   
};
