class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int height = 0;
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0;i < size;i++)
            {
                TreeNode * temp = q.front();
                if(i == 0)
                {
                    height++;
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                q.pop();
            }
        }
        return height;
    }
};