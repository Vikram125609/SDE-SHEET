class Solution {
public:
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    vector<int> Solution;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL)
        {
            return Solution;
        }
        s1.push(root);
        while(s1.empty() != true)
        {
            TreeNode * node = s1.top();
            s2.push(node);
            s1.pop();
            TreeNode * temp = s2.top();
            if(temp->left)
            {
                s1.push(temp->left);
            }
            if(temp->right)
            {
                s1.push(temp->right);
            }
        }
        while(s2.empty() != true)
        {
            TreeNode * temp = s2.top();
            Solution.push_back(temp->val);
            s2.pop();
        }
        return Solution;
    }
};