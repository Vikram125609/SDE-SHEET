class Solution {
public:
    vector<int> ds;
    void rightView(TreeNode* root,int level)
    {
        if(root == NULL)
        {
            return;
        }
        if(ds.size() == level)
        {
            ds.push_back(root->val);
        }
        rightView(root->right,level+1);
        rightView(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        rightView(root,0);
        return ds;
    }
};