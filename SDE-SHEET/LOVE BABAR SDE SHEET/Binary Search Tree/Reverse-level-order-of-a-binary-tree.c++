// Leetcode Cpp Solution
// class Solution {
// public:
//     vector<int> v1;
//     vector<vector<int>> v2;
//     queue<struct TreeNode*> q;
//     vector<vector<int>> levelOrderBottom(TreeNode* root) {
//         if(root == NULL)
//         {
//             return v2;
//         }
//         q.push(root);
//         while(!q.empty())
//         {
//             int size = q.size();
//             for(int i = 0;i<size;i++)
//             {
//                 struct TreeNode * temp = q.front();
//                 if(temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 if(temp->right)
//                 {
//                     q.push(temp->right);
//                 }
//                 v1.push_back(temp->val);
//                 q.pop();
//             }
//             v2.push_back(v1);
//             v1.clear();
//         }
//         reverse(v2.begin(),v2.end());
//         return v2;
//     }
// };