// Insert INto BST      Leetcode 701    @devottam2809

TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
            return new TreeNode(val);
        if(val<root->val)
            root->left=insertIntoBST(root->left,val);
        else if(val>root->val)
            root->right=insertIntoBST(root->right,val);
return root;
}
};
