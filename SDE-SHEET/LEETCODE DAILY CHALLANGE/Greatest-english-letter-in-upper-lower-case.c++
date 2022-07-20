class Solution {
public:
    string greatestLetter(string s) {
        sort(s.begin(),s.end());
        int a;
        vector<int> code;
        vector<int> ans;
        for(int i = 0;i<s.length();i++)
        {
            code.push_back(s[i]);
        }
        for(int i = 0;i < code.size() - 1;i++)
        {
            for(int j = i + 1;j < code.size();j++)
            {
                if((code[i] - code[j]) == -32)
                {
                    ans.push_back(i);
                }
            }
        }
        if(ans.size() == 0)
        {
            string z = "";
            return z;
        }
        int index = ans[ans.size() - 1];
        string z;
        z.push_back(s[index]);
        return z;
    }
};