// Leetcode Cpp Solution
// Not optimized
// class Solution {
// public:
//     vector<vector<int>> ans;
//     void genPermu(vector<int> emptyDS,vector<bool> taken,vector<int> nums)
//     {
//         if(emptyDS.size() == nums.size())
//         {
//             ans.push_back(emptyDS);
//             emptyDS.clear();
//             return;
//         }
//         for(int i = 0;i<nums.size();i++)
//         {
//             if(!taken[i])
//             {
//                 taken[i] = true;
//                 emptyDS.push_back(nums[i]);
//                 genPermu(emptyDS,taken,nums);
//                 taken[i] = false;
//                 emptyDS.pop_back();
//             }
//         }
//     }
//     vector<vector<int>> permute(vector<int>& nums){
//         vector<int> emptyDS;
//         vector<bool> taken(nums.size());
//         for(int i = 0;i < nums.size();i++)
//         {
//             taken[i] = false;
//         }
//         genPermu(emptyDS,taken,nums);
//         return ans;
//     }
// };