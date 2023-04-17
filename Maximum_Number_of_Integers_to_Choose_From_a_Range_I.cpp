// Leetcode 2554 Maximum Number of Integers to Choose From a Range I    @devottan2809

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int sum=0;
        int counter=0;
        set<int>s(banned.begin(),banned.end());

        for(int i=1;i<=n;i++){
            if(s.count(i))  
                continue;
            if(sum+i>maxSum)
                break;
        sum+=i;
        counter++;
        }
    return counter;
    }
};
