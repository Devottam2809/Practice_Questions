// Plus One   Leetcode 66     @devottam2809

class Solution {
    public int[] plusOne(int[] digits) {
        int n=digits.length;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<=8){
                digits[i]+=1;
                return digits;
            }
            else
                digits[i]=0;
        }
    digits = new int[digits.length + 1];
digits[0] = 1;
return digits;
    }
};
