// Interger Break       leetcode 343      @devottam2809

class Solution {
public:
int solve(int n,vector<int>&dp)
{
    int maxProd=INT_MIN;
    if(n<=2)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    for(int i=1;i<n;i++)
    {
        int prod=max(i*solve(n-i,dp),i*(n-i));
        maxProd=max(prod,maxProd);
    }
return dp[n]=maxProd;
}
    int integerBreak(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};
