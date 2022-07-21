struct Grp {
    int col;
    int row;
    TreeNode * root;
};
class Solution {
public:
    vector<int> v3;
    vector<vector<int>>v2;
    vector<vector<int>> v4;
    vector<Grp> v1;
    void verticalTravel(TreeNode * root,int row,int col)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left)
        {
            verticalTravel(root->left,row+1,col-1);
        }
        if(root->right)
        {
            verticalTravel(root->right,row+1,col+1);
        }
        v1.push_back({col,row,root});
        return;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        verticalTravel(root,0,0);
        for(int i = 0;i < v1.size();i++)
        {
            for(int j = i + 1;j < v1.size();j++)
            {
                if(v1[i].col > v1[j].col)
                {
                    swap(v1[i],v1[j]);
                }
                if(v1[i].col == v1[j].col)
                {
                    if(v1[i].row > v1[j].row)
                    {
                        swap(v1[i],v1[j]);
                    }
                    if(v1[i].row == v1[j].row)
                    {
                        if(v1[i].root->val>v1[j].root->val)
                        {
                            swap(v1[i],v1[j]);
                        }
                    }
                }
            }
        }
        int val = v1[0].col;
        for(int i = 0;i<v1.size();i++)
        {
            if(val == v1[i].col)
            {
                v3.push_back(v1[i].root->val);
                continue;
            }
            v2.push_back(v3);
            v3.clear();
            v3.push_back(v1[i].root->val);
            val = v1[i].col;
        }
        v2.push_back(v3);
        return v2;
    }
};