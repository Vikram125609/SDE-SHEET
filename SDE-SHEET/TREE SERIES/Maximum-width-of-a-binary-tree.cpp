class Solution {
public:
    void maxwidth(TreeNode* root,int row,int col,vector<pair<int,int>> &solution)
    {
        if(root == NULL)
        {
            return;
        }
        solution.push_back({row,col});
        maxwidth(root->left,row+1,col-1,solution);
        maxwidth(root->right,row+1,col+1,solution);
    }
    int widthOfBinaryTree(TreeNode* root) {
        vector<pair<int,int>> solution;
        maxwidth(root,0,0,solution);
        for(int i = 0;i < solution.size();i++)
        {
            for(int j = i + 1;j < solution.size();j++)
            {
                if(solution[i].first > solution[j].first)
                {
                    swap(solution[i],solution[j]);
                }
                if(solution[i].first == solution[j].first)
                {
                    if(solution[i].second > solution[j].second)
                    {
                        swap(solution[i],solution[j]);
                    }
                }
            }
        }
        int currRow = solution[0].first;
        vector<pair<int,int>> sameRow;
        vector<vector<pair<int,int>>> finalVector;
        for(int i = 0;i < solution.size();i++)
        {
            if(currRow == solution[i].first)
            {
                sameRow.push_back(solution[i]);
            }
            else
            {
                finalVector.push_back(sameRow);
                sameRow.clear();
                currRow = solution[i].first;
                sameRow.push_back(solution[i]);
            }
        }
        int maxi = 0;
        for(int i=0;i<finalVector.size();i++)
        {
            for(int j=0;j<finalVector[i].size();j++)
            {
                cout<<finalVector[i][j].first<<" "<<finalVector[i][j].second<<endl;
            }
        }
        cout<<endl;
        return maxi;
    }
};