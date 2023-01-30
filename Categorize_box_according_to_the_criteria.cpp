// Categorize Box accoriding to the criteria    leetcode 2525   @devottam2809

class Solution {
public:
    string categorizeBox(long int l, long int b, long int h, long int mass) {
        int blk = 0, hv = 0;
        if(l >= 10000 || b >= 10000 || h >= 10000 || (long long)l * b * h >= 1e9)  blk = 1;
        if(mass >= 100) hv = 1;
        
        if(blk && hv) return "Both";
        if(!blk && !hv) return "Neither";
        if(blk && !hv) return "Bulky";
        else return "Heavy";
    }
}; 
