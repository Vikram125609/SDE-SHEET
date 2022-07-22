class Solution {
public:
    vector<string> ans;
    void binaryTreePaths(TreeNode* root,string path)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            path = path + to_string(root->val);
            ans.push_back(path);
            return;
        }
        path = path + to_string(root->val);
        binaryTreePaths(root->left,path + "->");
        binaryTreePaths(root->right,path + "->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        binaryTreePaths(root,s);
        return ans;
    }
};