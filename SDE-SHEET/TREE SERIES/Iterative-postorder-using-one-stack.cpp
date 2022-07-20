class Solution {
public:
    stack<TreeNode*> s;
    vector<int> solution;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL)
        {
            return solution;
        }
        TreeNode* curr = root;
        while(!s.empty() || curr != NULL)
        {
            if(curr != NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            else
            {
                TreeNode * temp = s.top()->right;
                if(temp == NULL)
                {
                    temp = s.top();
                    s.pop();
                    solution.push_back(temp->val);
                    while(!s.empty() && temp == s.top()->right)
                    {
                        temp = s.top();
                        s.pop();
                        solution.push_back(temp->val);
                    }
                }
                else
                {
                    curr = temp;
                }
            }
        }
        return solution;
    }
};