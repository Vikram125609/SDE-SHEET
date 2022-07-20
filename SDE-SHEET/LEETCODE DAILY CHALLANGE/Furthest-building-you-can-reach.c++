#include <iostream>
#include <vector>
using namespace std;
int furthestBuilding(vector<int> &heights, int bricks, int ladders)
{
    int count = 0;
    for (int i = 0; i < heights.size() - 1; i++)
    {
        if (heights[i + 1] > heights[i])
        {
            if (heights[i + 1] - heights[i] <= bricks)
            {
                bricks = bricks - (heights[i + 1] - heights[i]);
                count++;
                continue;
            }
            else if (ladders > 0)
            {
                ladders = ladders - 1;
                count++;
                continue;
            }
            else if (heights[i + 1] - heights[i] == 1)
            {
                count++;
                continue;
            }
            if(bricks == 0 && ladders == 0)
            {
                break;
            }
        }
        else if (heights[i + 1] <= heights[i])
        {
            count++;
            continue;
        }
        break;
    }
    return count;
}
int main()
{
    vector<int> heights;
    heights.push_back(1);
    heights.push_back(2);
    // heights.push_back(1);
    // heights.push_back(2);
    // heights.push_back(3);
    // heights.push_back(4);
    // heights.push_back(1000);
    cout << furthestBuilding(heights, 0, 0);
    return 0;
}