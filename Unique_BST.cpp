// Unique BST     Leetcode 96     @devottam2809

class Solution {
public:
    int numTrees(int n) {
        long long ans=0;
        if(n<=1)
            return 1;
        for(int i=0;i<n;i++)
            ans+=numTrees(i)*numTrees(n-i-1);
return ans;
    }
};
