class Solution {
public:
    stack<TreeNode*> s;
    vector<int> solution;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)
        {
            return solution;
        }
        s.push(root);
        while(!s.empty())
        {
            TreeNode * temp = s.top();
            s.pop();
            solution.push_back(temp->val);
            if(temp->right)
            {
                s.push(temp->right);
            }
            if(temp->left)
            {
                s.push(temp->left);
            }
        }
        return solution;
    }
};