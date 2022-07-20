// Leetcode Cpp Solution
// class Solution {
// public:
//     vector<string> Solution;
//     bool isValid(string s,int n,stack<int>& StackDS)
//     {
//         if(s[0] == ')' || s[n-1] == '(')
//         {
//             return false;
//         }
//         int i = 0;
//         while(!StackDS.empty())
//         {
//             if(s[i] == '(')
//             {
//                 StackDS.push(1);
//                 i++;
//             }
//             if(s[i] == ')')
//             {
//                 StackDS.pop();
//                 i++;
//             }
//             if(StackDS.top() == -1)
//             {
//                 if(s[i] == ')')
//                 {
//                     return false;
//                 }
//             }
//             if(i == n )
//             {
//                 if(StackDS.top() == -1)
//                 {
//                     StackDS.pop();
//                     return true;
//                 }
//                 return false;
//             }
            
//         }
//         return true;
//     }
//     void genParenthesis(int n,string& s,int index)
//     {
//         if(index == n)
//         {
//             stack<int> StackDS;
//             StackDS.push(-1);
//             if(isValid(s,n,StackDS))
//             {
//                 Solution.push_back(s);
//             }
//             return;
//         }
//         s[index] = '(';
//         genParenthesis(n,s,index+1);
//         s[index] = ')';
//         genParenthesis(n,s,index+1);
//     }
//     vector<string> generateParenthesis(int n) {
//         string s(2*n,'.');
//         genParenthesis(2*n,s,0);
//         return Solution;
//     }
// };