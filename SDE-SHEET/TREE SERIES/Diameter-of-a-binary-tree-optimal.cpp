class Solution {
public:
    int diamax = 0;
    int height(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int lheight = height(root->left);
        int rheight = height(root->right);
        diamax = max(diamax,lheight + rheight);
        return 1 + max(lheight,rheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diamax;
    }
};