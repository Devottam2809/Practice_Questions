// 1572. Matrix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat[0].size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)
                    sum1+=mat[i][j];
                if(i==n-1-j)
                    sum2=mat[i][j];
            }
        }
    if(n%2==0)
        return sum1+sum2;
    return sum1+sum2-mat[n/2][n/2];
    }
};
