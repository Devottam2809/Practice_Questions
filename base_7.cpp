// base 7     Leetcode 504   @devottam2809

class Solution {
    public String convertToBase7(int num) {
        if(num==0)
            return "0";
        int temp=Math.abs(num);
        StringBuilder answer = new StringBuilder();
        while(temp!=0)
        {
            answer.append(temp%7);
            temp/=7;
        }
        if(num<0)
            answer.append('-');
              
    return answer.reverse().toString();
    }
}
