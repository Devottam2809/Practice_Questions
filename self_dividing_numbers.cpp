// Self Dividing Numbers    leetcode 728      @devottam2809

class Solution {
public:

bool isDivisible(int n,int last_digit)
{
    return (last_digit!=0 && (n%last_digit==0));
}

bool check_divide(int num)
{
    int temp=num;
    while(temp!=0)
    {
        int last=temp%10;
        if(!isDivisible(num,last))
            return false;
        temp/=10;
    }
return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(check_divide(i))
                ans.push_back(i);
        }   
    return ans;
    }
};
