// Leetcode 128 Longest consequtive Sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>m;
        int result=0;
        for(auto i: nums)
            m[i]++;

        for(auto i: m){
            if(m.find(i.first-1) == m.end()){
                int it=1;
                int counter=1;
                while(m.find(i.first+it)!=m.end()){
                    counter++;
                    it++;
                }
                result = max(result,counter);
            }
        }
    return result;
    }
};
