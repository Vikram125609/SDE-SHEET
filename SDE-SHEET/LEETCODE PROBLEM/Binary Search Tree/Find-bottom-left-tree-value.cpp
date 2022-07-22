class Solution {
public:
    int leftValue;
    bool flag = false;
    int height(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        return 1 + max(height(root->left),height(root->right));
    }
    void bottomLeftValue(TreeNode* root,int level,int maxHeight,string position)
    {
        if(root == NULL)
        {
            return;
        }
        if(level == maxHeight && position == "left")
        {
            leftValue = root->val;
            flag = true;
            return;
        }
        if(flag)
        {
            return;
        }
        bottomLeftValue(root->left,level+1,maxHeight,"left");
        if(level == maxHeight && position == "right")
        {
            leftValue = root->val;
            return;
        }
        bottomLeftValue(root->right,level+1,maxHeight,"right");
    }
    int findBottomLeftValue(TreeNode* root) {
        int maxHeight = height(root);
        if(maxHeight == 1)
        {
            return root->val;
        }
        bottomLeftValue(root,1,maxHeight,"current");
        return leftValue;
    }
};