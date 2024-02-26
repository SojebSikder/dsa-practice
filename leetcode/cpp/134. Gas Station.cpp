#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int n = gas.size();
        int total_tank = 0;
        int curr_tank = 0;
        int starting_station = 0;

        for (int i = 0; i < n; i++)
        {
            total_tank += gas[i] - cost[i];
            curr_tank += gas[i] - cost[i];

            if (curr_tank < 0)
            {
                starting_station = i + 1;
                curr_tank = 0;
            }
        }

        return total_tank >= 0 ? starting_station : -1;
    }
};

int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int result = Solution().canCompleteCircuit(gas, cost);

    cout << result << endl;

    return 0;
}