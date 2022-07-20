class Solution {
public:
    TreeNode* buildTree(vector<int>& nums,int start,int end)
    {
        if(start > end)
        {
            return NULL;
        }
        int maxi = INT_MIN;
        int position;
        for(int i=start;i<=end;i++)
        {
            if(maxi < nums[i])
            {
                maxi = max(maxi,nums[i]);
                position = i;
            }
        }
        TreeNode * root = new TreeNode(maxi);
        root->left = buildTree(nums,start,position-1);
        root->right = buildTree(nums,position+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildTree(nums,0,nums.size()-1);
    }
};