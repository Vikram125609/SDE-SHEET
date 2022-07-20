class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> solution;
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0;i < size;i++)
            {
                TreeNode * temp = q.front();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                solution.push_back(temp->val);
                q.pop();   
            }
            ans.push_back(solution);
            solution.clear();
        }
        return ans;
    }
};