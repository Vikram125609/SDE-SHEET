#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxi = INT_MIN;
bool flag = false;
vector<int> v1;
void maximum(string words[], int s, int e, int size)
{
    if (s >= size)
    {
        return;
    }
    if (s >= e)
    {
        maximum(words, s + 1, size - 1, size);
        return;
    }
    string temp1 = words[s];
    string temp2 = words[e];
    maximum(words, s, e - 1, size);
    int tempsize = temp1.size() * temp2.size();
    cout << temp1 << " " << temp2 << endl;
    for (int i = 0; i < temp1.size(); i++)
    {
        for (int j = 0; j < temp2.size(); j++)
        {
            if (temp1[i] == temp2[j])
            {
                flag = true;
                break;
            }
            else
            {
                if ((i == temp1.size() - 1) && (j == temp2.size() - 1))
                {
                    maxi = max(maxi, tempsize);
                    v1.push_back(maxi);
                }
            }
        }
        if (flag == true)
        {
            break;
        }
    }
}
int main()
{
    string words[] = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    int size = sizeof(words) / sizeof(words[0]);
    maximum(words, 0, size - 1, size);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}