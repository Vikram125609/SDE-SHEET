class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        bool flag = true;
        vector<vector<int>> zigzag;
        vector<int> level;
        if (root == NULL)
        {
            return zigzag;
        }
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *temp = q.front();
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
                level.push_back(temp->val);
                q.pop();
            }
            zigzag.push_back(level);
            level.clear();
        }
        // Strivers Method reduces (N) TC
        if (flag)
        {
            zigzag.push_back(level);
            level.clear();
            flag = false;
        }
        else
        {
            reverse(level.begin(), level.end());
            zigzag.push_back(level);
            level.clear();
            flag = true;
        }
        // My Method
        // for(int i=0;i<zigzag.size();i++)
        // {
        //     if(i % 2 != 0)
        //     {
        //         reverse(zigzag[i].begin(),zigzag[i].end());
        //     }
        // }
        return zigzag;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        return levelOrder(root);
    }
};