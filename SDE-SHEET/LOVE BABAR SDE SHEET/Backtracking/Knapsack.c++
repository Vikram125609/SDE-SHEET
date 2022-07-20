#include <iostream>
#include <vector>
using namespace std;
vector<int> Solution;
int Profit[] = {3, 5, 6, 10};
int size = sizeof(Profit) / sizeof(Profit[0]);
int Weight[] = {2, 3, 4, 5};
void knapsack(int M, int index, int profit)
{
    if (index == size)
    {
        if (M == 0)
        {
            Solution.push_back(profit);
        }
        return;
    }
    profit = profit + Profit[index];
    M = M - Weight[index];
    knapsack(M, index + 1, profit);
    profit = profit - Profit[index];
    M = M + Weight[index];
    knapsack(M, index + 1, profit);
}
int main()
{
    int M = 8;
    knapsack(M, 0, 0);
    for (int i = 0; i < Solution.size(); i++)
    {
        cout << Solution[i] << " ";
    }
    return 0;
}