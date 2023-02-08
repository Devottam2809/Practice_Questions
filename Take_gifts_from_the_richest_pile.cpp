// Take Gifts From the Richest Pile       Leetcode 2558     @devottam2809

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
    priority_queue<long long>pq;
    for(long long int i=0;i<gifts.size();i++)
        pq.push(gifts[i]);

    while(k--)
    {
        long long int n=pq.top();
        pq.pop();
        n=sqrt(n);
        pq.push(n);
    }
    long long int sum=0;
    while(!pq.empty())
    {
        sum+=pq.top();
        pq.pop();
    }
    return sum;
    }
};
