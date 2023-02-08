// Sum of Digits of String After Convert      Leetcode 1945     @devottam2809

class Solution {
public:
int sumofrem(int num)
{
    int ans=0;
    while(num)
    {
        ans+=num%10;
        num/=10;
    }
return ans;
}
    int getLucky(string s, int k) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int val=s[i]-'a'+1;
            sum+=(val<10)?val:(val%10+val/10);
        }
        k-=1;
        while(k--)
        {
            sum=sumofrem(sum);
        }
    return sum;
    }
};
