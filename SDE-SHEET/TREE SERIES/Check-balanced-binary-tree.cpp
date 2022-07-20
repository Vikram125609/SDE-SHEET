class Solution {
public:
    int Height(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        return 1 + max(Height(root->left),Height(root->right));
    }
    bool checkBalanced(TreeNode* root)
    {
        if(root == NULL)
        {
            return true;
        }
        if(abs(Height(root->left) - Height(root->right)) <= 1)
        {
            return checkBalanced(root->left) && checkBalanced(root->right);
        }
        return false;
    }
    bool isBalanced(TreeNode* root) {
        return checkBalanced(root);
    }
};