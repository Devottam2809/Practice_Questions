// Subtract the Product and Sum of Digits of an Integer  Leetcode 1281 @devottam2809

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            prod*=rem;
            sum+=rem;
            n=n/10;
        }
    return prod-sum;
    }
};
