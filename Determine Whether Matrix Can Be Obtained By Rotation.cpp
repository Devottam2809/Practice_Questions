// Determine Whether Matrix Can Be Obtained By Rotation   Leetcode 1886   @devottam2809

class Solution {
public:
    bool findRotation(vector<vector<int>>& m, vector<vector<int>>& target) {
        int k=4;
        while(k--){
            vector<vector<int>>ans;
            for(int i=0;i<m.size();i++){
                vector<int>temp;
                for(int j=m.size()-1;j>=0;j--){
                    temp.push_back(m[j][i]);
                }
            ans.push_back(temp);
        }
        m=ans;
        if(m==target)
            return true;
        }
    return false;
    }
};
