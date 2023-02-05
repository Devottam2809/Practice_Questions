// Seperate the digits in an array      Leetcode 2553   @devottam2809

class Solution {
public:
    
vector<int>arr;
    
void lst_dig(int N)
{
    int r;

    if (N == 0) {
        return;
    }

    r = N % 10;

    lst_dig(N / 10);
  
    vector<int>help;
    help.push_back(r);
    reverse(help.begin(),help.end());
    for(int i=0;i<help.size();i++)
        arr.push_back(help[i]);
}    n arra
    
vector<int> separateDigits(vector<int>& nums) {    
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<10)
            arr.push_back(nums[i]);
        else{
            lst_dig(nums[i]);
        }
    }
return arr;
}
};
