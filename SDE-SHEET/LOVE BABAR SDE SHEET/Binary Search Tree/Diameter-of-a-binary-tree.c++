// Leetcode Cpp Solution
// class Solution {
// public:
//     int Diameter = INT_MIN;
//     int height(TreeNode * root)
//     {
//         if(root == NULL)
//         {
//             return 0;
//         }
//         int x = height(root->left);
//         int y = height(root->right);
//         return max(x,y) + 1;
//     }
//     int diameter(TreeNode* root)
//     {
//         if(root == NULL)
//         {
//             return 0;
//         }
//         diameter(root->left);
//         diameter(root->right);
//         Diameter =  max(Diameter,height(root->left) + height(root->right));
//         return Diameter;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         return diameter(root);
//     }
// };