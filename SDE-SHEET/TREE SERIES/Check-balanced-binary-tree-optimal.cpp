class Solution {
public:
    int height(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(height(root->left) == -1 || height(root->right) == -1)
        {
            return -1;
        }
        if(abs(height(root->left) - height(root->right)) > 1)
        {
            return -1;
        }
        return 1 + max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(height(root) == -1)
        {
            return false;
        }
        return true;
    }
};