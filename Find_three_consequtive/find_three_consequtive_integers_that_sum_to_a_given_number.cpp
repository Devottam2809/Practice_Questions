// Find Three Consecutive Integers That Sum to a Given Number   Leetcode 2177

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
    vector<long long >ans;
    vector<long long >zero;
        long long int number=(num+3)/3;
    ans.push_back(number-2);
    ans.push_back(number-1);
    ans.push_back(number);
    long long int sum=0;
        for(long long int i=0;i<ans.size();i++)
            sum+=ans[i];
    if(sum==num)
        return ans;
return zero;
    }
};
