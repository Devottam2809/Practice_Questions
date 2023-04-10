// Leetcode 973 K Closest Points to origin    devottam2809

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<points.size();i++)
        {
           int dis=pow(points[i][0],2)+pow(points[i][1],2); 
            pq.push({dis,{points[i][0],points[i][1]}});
            if(pq.size()>k)
                pq.pop();
        }
    vector<vector<int>>ans;
    //vector<int>temp;
    while(pq.size()>0)
    {
        vector<int>temp;
            temp.push_back(pq.top().second.first);
            temp.push_back(pq.top().second.second);
            ans.push_back(temp);
            pq.pop();
    }
return ans;
    }
};
