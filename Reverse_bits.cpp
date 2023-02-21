// Reverse Bits     Leetcode 190      @devottam2809

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0;
        int pos=0;
        while(n>0)
        {
            ans+=(n%2)<<(31-pos);
            n=n>>1;
            pos++;
        }
    return ans;
    }
};
