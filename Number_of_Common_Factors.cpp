// Number of Common Factors Leetcode 2427     @devottam2809

class Solution {
public:
    int commonFactors(int a, int b) {
        int counter=0;
        for(int i=1;i<=1000;i++)
        {
            if((a%i)==0 && (b%i)==0)
                counter++;
        }
    return counter;
    }
};
