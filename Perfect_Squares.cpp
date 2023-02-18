// Perfect Square     Leetcode  279   @devottam2809

class Solution {
public:
int solve(int n,vector<int>& dp)
{
    if(n<=1)    return n;
    if(dp[n]!=-1)   return dp[n];
    int miniCount=INT_MAX;
    for(int i=1;i<=sqrt(n);i++)
    {
        int ans=1+solve(n-(i*i),dp);
        miniCount=min(miniCount,ans);
    }
return dp[n]=miniCount;
}
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};
