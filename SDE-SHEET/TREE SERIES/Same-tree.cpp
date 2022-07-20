class Solution {
public:
    bool Traverse(TreeNode* p,TreeNode* q)
    {
        if(p == NULL && q == NULL)
        {
            return true;
        }
        else if((p != NULL && q == NULL) || (p == NULL && q != NULL))
        {
            return false;
        }
        if(p->val != q->val)
        {
            return false;
        }
        return Traverse(p->left,q->left) && Traverse(p->right,q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       return Traverse(p,q);
    }
};