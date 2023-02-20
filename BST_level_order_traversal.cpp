// BST Level order traversal    Leetcode 102      @devottam2809

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>nums;
        if(root==NULL)
            return nums;
    
        queue<TreeNode *>q;
        q.push(root);

        while(!q.empty())
        {
        int size=q.size();
            vector<int>ans;

            while(size--)
            {
                TreeNode *temp=q.front();
                q.pop();
                
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);
            ans.push_back(temp->val);
            }
        nums.push_back(ans);
        }
    return nums;
    }
};
