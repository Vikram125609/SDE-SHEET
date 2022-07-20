// Leetcode Cpp Solution
// class Solution {
// public:
//     vector<vector<int>> ans;
//     void pathsum(TreeNode* root,int targetSum,vector<int> v)
//     {
//         if(root == NULL)
//         {
//             return;
//         }
//         if(root->left == NULL && root->right == NULL)
//         {
//             if(targetSum - root->val == 0)
//             {
//                 v.push_back(root->val);
//                 ans.push_back(v);
//                 v.clear();
//             }
//             return;
//         }
//         v.push_back(root->val);
//         pathsum(root->left,targetSum-root->val,v);
//         pathsum(root->right,targetSum-root->val,v);
//     }
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<int> v;
//         pathsum(root,targetSum,v);
//         return ans;
//     }
// };