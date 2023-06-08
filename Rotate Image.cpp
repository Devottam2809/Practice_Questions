// Rotate Image leetcode 48     @devottam2809

class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        vector<vector<int>>ans;
        for(int i=0;i<m.size();i++){
            vector<int>temp;
            for(int j=m.size()-1;j>=0;j--){
                temp.push_back(m[j][i]);
            }
        ans.push_back(temp);
        }
        m=ans;
    }
};
