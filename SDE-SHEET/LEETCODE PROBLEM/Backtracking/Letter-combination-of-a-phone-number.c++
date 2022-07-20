// #include <iostream>
// #include <vector>
// using namespace std;
// vector<string> ans;
// string getString(char a)
// {
//     string i(1, a);
//     if (i == "2")
//     {
//         return "abc";
//     }
//     if (i == "3")
//     {
//         return "def";
//     }
//     if (i == "4")
//     {
//         return "ghi";
//     }
//     if (i == "5")
//     {
//         return "jkl";
//     }
//     if (i == "6")
//     {
//         return "mno";
//     }
//     if (i == "7")
//     {
//         return "pqrs";
//     }
//     if (i == "8")
//     {
//         return "tuv";
//     }
//     if (i == "9")
//     {
//         return "wxyz";
//     }
//     return "";
// }
// void finalSolution(vector<string> s, int size, int outerIndex, int innerIndex, string str)
// {
//     if(innerIndex == size && outerIndex == size)
//     {
//         str.push_back(s[outerIndex][innerIndex]);
//         ans.push_back(str);
//         str.pop_back();
//         return;
//     }
//     if (innerIndex == size || outerIndex == size)
//     {
//         str.push_back(s[outerIndex][innerIndex]);
//         ans.push_back(str);
//         str.pop_back();
//         return;
//     }
//     str.push_back(s[outerIndex][innerIndex]);
//     finalSolution(s, size, outerIndex + 1, innerIndex, str);
//     str.pop_back();
//     finalSolution(s, size, outerIndex, innerIndex + 1, str);
// }
// void solution(vector<string> s, int size, int outerIndex, int innerIndex)
// {
//     string str;
//     for (int i = 0; i < s[0].size(); i++)
//     {
//         str.push_back(s[0][i]);
//         finalSolution(s, size, outerIndex, innerIndex, str);
//         str.pop_back();
//     }
// }
// vector<string> letterCombinations(string digits)
// {
//     vector<string> s;
//     if (digits == "")
//     {
//         return ans;
//     }
//     for (int i = 0; i < digits.size(); i++)
//     {
//         s.push_back(getString(digits[i]));
//     }
//     solution(s, digits.size(), 1, 0);
//     return ans;
// }
// int main()
// {
//     vector<string> v = letterCombinations("234");
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }