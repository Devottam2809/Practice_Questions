// 191 Leetcode Number of 1 Bits    @devottam2809

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        while(n)
        {
            n&=(n-1);
            counter++;
        }
        return counter;
    }
};
