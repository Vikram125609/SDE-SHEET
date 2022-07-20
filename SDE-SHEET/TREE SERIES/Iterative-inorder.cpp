class Solution {
public:
    stack<TreeNode*> s;
    vector<int> Solution;
    vector<int> inorderTraversal(TreeNode* root) {
        struct TreeNode * temp = root;
        while(1)
        {
            if(temp != NULL)
            {
                s.push(temp); 
                temp = temp->left;
            }
            else
            {
                if(s.empty() == true) break;
                struct TreeNode * value = s.top();
                s.pop();
                Solution.push_back(value->val);
                if(value->right)
                {
                    temp = value->right;
                }
            }
        }
        return Solution;
    }
};