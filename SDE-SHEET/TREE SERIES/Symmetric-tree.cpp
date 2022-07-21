class Solution {
public:
    bool isSame(TreeNode* head1,TreeNode* head2)
    {
        if((head1 == NULL && head2 != NULL) || (head1 != NULL && head2 == NULL))
        {
            return false;
        }
        if(head1 == NULL && head2 == NULL)
        {
            return true;
        }
        if(head1->val == head2->val)
        {
            return isSame(head1->left,head2->right) && isSame(head1->right,head2->left);
        }
        else
        {
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left,root->right);
    }
};