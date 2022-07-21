class Solution {
public:
    vector<int> v1;
    vector<int> v3;
    vector<vector<int>> v2;
    queue<struct TreeNode*> q;
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
        {
            return v1;
        }
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0;i<size;i++)
            {
                struct TreeNode * temp = q.front();
                if(temp->right)
                {
                    q.push(temp->right);
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                v1.push_back(temp->val);
                q.pop();
            }
            v2.push_back(v1);
            v1.clear();
        }
        for(int i = 0;i<v2.size();i++)
        {
            v3.push_back(v2[i][0]);
        }
        return v3;
    }
};