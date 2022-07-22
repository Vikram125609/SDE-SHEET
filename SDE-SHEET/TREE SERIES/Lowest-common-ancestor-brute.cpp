class Solution {
public:
    bool anscestor(TreeNode* root,TreeNode* p,TreeNode* q,bool &flag1,bool &flag2)
    {
        if(root == NULL)
        {
            return false;
        }
        if(root->val == p->val)
        {
            flag1 = true;
        }
        if(root->val == q->val)
        {
            flag2 = true;
        }
        anscestor(root->left,p,q,flag1,flag2);
        anscestor(root->right,p,q,flag1,flag2);
        return (flag1 && flag2);
    }
    void traverse(TreeNode* root,int level,TreeNode* p,TreeNode* q,vector<pair<TreeNode*,int>> &solution)
    {
        if(root == NULL)
        {
            return;
        }
        bool flag1 = false;
        bool flag2 = false;
        bool check = anscestor(root,p,q,flag1,flag2);
        if(check)
        {
            solution.push_back({root,level});
        }
        traverse(root->left,level+1,p,q,solution);
        traverse(root->right,level+1,p,q,solution);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<pair<TreeNode*,int>> solution;
        traverse(root,0,p,q,solution);
        TreeNode* temp = solution[solution.size()-1].first;
        return temp;
    }
};