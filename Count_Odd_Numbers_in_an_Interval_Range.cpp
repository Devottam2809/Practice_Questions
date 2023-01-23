// Count Odd Numbers in an Interval Range Leetcode1523      @devottam2809
class Solution {
public:
    int countOdds(int low, int high) {
        int counter=0;
        for(int i=low;i<=high;i++)
        {
            if((i&1)!=0)
                counter++;
        }
    return counter;
    }
};
