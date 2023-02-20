// Binary Tree Zigzag Level Order Traversal     Leetcode    103   @devottam2809

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>nums;
        if(root==NULL)
            return nums;
    
    queue<TreeNode *>q;
    q.push(root);
    
    int i=0;
    while(!q.empty())
    {
        int size=q.size();
        vector<int>ans;
        for(int i=0;i<size;i++)
        {
        TreeNode *temp=q.front();
        q.pop();
        //int idx=var?i:size-i-1;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        ans.push_back(temp->val);
        //nums[idx].push_back(temp->val);
        }
    if(i++%2)
        reverse(ans.begin(),ans.end());
    //var=!var;
    nums.push_back(ans);
    }
return nums;
    }
};
