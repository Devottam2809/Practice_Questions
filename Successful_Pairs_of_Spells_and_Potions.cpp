// Leetcode 2300 Successful Pairs of Spells and Potions   @devottam2809

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        long long n=spells.size();
        long long m=potions.size();
        sort(potions.begin(),potions.end());
        vector<int>count;

        for(long long i=0;i<n;i++){
            long long l=0;
            long long r=m;
            while(l<r){
                int mid=l+(r-l)/2;
                //long long temp=spells[i]*potions[mid];
                if((long)spells[i]*(long)potions[mid]>=success)
                    r=mid;
                else{
                    l=mid+1;
                }
            }
            count.push_back(m-r);
        }
    return count;
    }
};
