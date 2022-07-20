#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > vov;
void combinationSum2(int Array[], vector<int> v, int index, int size, int target)
{
    if (target < 0)
    {
        return;
    }
    if (index >= size)
    {
        if (target == 0)
        {
            vov.push_back(v);
        }
        return;
    }
    v.push_back(Array[index]);
    target = target - Array[index];
    combinationSum2(Array, v, index + 1, size, target);
    v.pop_back();
    target = target + Array[index];
    combinationSum2(Array, v, index + 1, size, target);
}
int main()
{
    int Array[] = {1, 2, 7, 6, 1, 5};
    int size = sizeof(Array) / sizeof(Array[0]);
    vector<int> v;
    combinationSum2(Array, v, 0, size, 8);
    for (int i = 0; i < vov.size(); i++)
    {
        sort(vov[i].begin(), vov[i].end());
    }
    for (int i = 0; i < vov.size(); i++)
    {
        for (int j = 0; j < vov[i].size(); j++)
        {
            cout << vov[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}