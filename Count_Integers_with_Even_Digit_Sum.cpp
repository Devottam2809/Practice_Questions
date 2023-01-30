// Count Integers with Even digit sum     LeetCode 2180   @devottam2809

class Solution {
public:
    bool check(int i)
    {
        int sum=0;
        while(i!=0)
        {
            int temp=i%10;
            sum+=temp;
            i=i/10;
        }
        if(sum%2==0)
            return true;
    return false;
    }
    int countEven(int num) {
        int counter=0;
        for(int i=2;i<=num;i++)
        {
            if(check(i))
                counter++;
        }
    return counter;
    }
};
