class Solution {
public:
    int maxi = 0;
    int heightmax = 0;
    int height(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        return 1  + max(height(root->left),height(root->right));
    }
    void diameter(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        diameter(root->left);
        diameter(root->right);
        heightmax = height(root->left) + height(root->right);
        maxi = max(maxi,heightmax);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return maxi;
    }
};