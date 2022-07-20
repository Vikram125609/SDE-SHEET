class Solution {
public:
    int maxPathSum(TreeNode*root,int &maxi)
    {
        if(root == NULL)
        {
            return 0;
        }
        int leftSum = max(0,maxPathSum(root->left,maxi));
        int rightSum = max(0,maxPathSum(root->right,maxi));
        maxi = max(maxi,leftSum + rightSum + root->val);
        return max(leftSum,rightSum) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathSum(root,maxi);
        return maxi;
    }
};