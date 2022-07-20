class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> &a, vector<int> &b){ return a[1] > b[1]; });
        int ans = 0;
        for(int i = 0;i < boxTypes.size();i++)
        {
            if(truckSize >= boxTypes[i][0])
            {
                ans = ans + boxTypes[i][0] * boxTypes[i][1];
                truckSize = truckSize - boxTypes[i][0];
            }
            else
            {
                ans = ans + truckSize * boxTypes[i][1];
                break;
            }
        }
        return ans;   
    }
};