// Invert BST leetcode     226          @devottam2809
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        invertTree(root->left);
        invertTree(root->right);
        TreeNode *temp=root->left;
        root->left=root->right;
        root->right=temp;
    return root;
    }
};
