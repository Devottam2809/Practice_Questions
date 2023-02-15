// Remove stones to minimize the total      Leetcode 1962   @devottam2809

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxheap;
        for(int i=0;i<piles.size();i++)
            maxheap.push(piles[i]);
        
        while(k--)
        {
            int t=maxheap.top();
            maxheap.pop();
            t=t-floor(t/2);
            maxheap.push(t);
        }
    int sum=0;
    while(!maxheap.empty())
    {
        int x=maxheap.top();
        sum+=x;
        maxheap.pop();
    }
return sum;
    }
};
