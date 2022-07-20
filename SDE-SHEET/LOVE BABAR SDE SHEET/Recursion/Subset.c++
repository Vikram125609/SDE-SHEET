// Leetcode Cpp Solution
// class Solution {
// public:
//     vector<int> v1;
//     vector<vector<int>> v2;
//     void Subset(vector<int> nums,vector<int> emptyds,int index)
//     {
//         if(index == nums.size())
//         {
//             for(int i = 0;i < emptyds.size();i++)
//             {
//                 v1.push_back(emptyds[i]);
//             }
//             v2.push_back(v1);
//             v1.clear();
//             return;
//         }
//         emptyds.push_back(nums[index]);
//         Subset(nums,emptyds,index+1);
//         emptyds.pop_back();
//         Subset(nums,emptyds,index+1);
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int> emptyds;
//         Subset(nums,emptyds,0);
//         return v2;
        
//     }
// };