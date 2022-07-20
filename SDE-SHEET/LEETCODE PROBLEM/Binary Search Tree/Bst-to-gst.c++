// Leetcode Cpp Solution
// class Solution {
// public:
//     vector<int> v;
//     stack<int> s;
//     int sum;
//     void inOrder(TreeNode* root)
//     {
//         if(root == NULL)
//         {
//             return;
//         }
//         inOrder(root->left);
//         v.push_back(root->val);
//         inOrder(root->right);
//     }
//     void newArray()
//     {
//         for(int i = 0;i < v.size();i++)
//         {
//             sum = 0;
//             for(int j = i; j < v.size();j++)
//             {
//                 sum = sum + v[j];
//             }
//             v[i] = sum;
//         }
//         for(int i = v.size() - 1;i >= 0;i--)
//         {
//             s.push(v[i]);
//         }
//     }
//     void gst(TreeNode* root)
//     {
//         if(root == NULL)
//         {
//             return;
//         }
//         gst(root->left);
//         root->val = s.top();
//         s.pop();
//         gst(root->right);
//     }
//     TreeNode* bstToGst(TreeNode* root) {
//         inOrder(root);
//         newArray();
//         gst(root);
//         return root;
//     }
// };