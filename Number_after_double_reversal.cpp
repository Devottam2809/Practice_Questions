// A number after double reversal    Leetcode 2114     @devottam2809

class Solution {
public:
int rev(int n)
{
    int copy=n;
    int ans=0;
    while(n)
    {
        int temp=n%10;
        ans=ans*10+temp;
        n/=10;
    }
return ans;
}
    bool isSameAfterReversals(int num) {
        int copy=num;
        int t=rev(num);
        int ans=rev(t);
        if(ans==copy)
            return true;
return false;
    }
};
