#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];

                if (sum > max)
                {
                    max = sum;
                }
            }
        }

        return max;
    }
};

int main()
{
    vector<vector<int>> accounts = {{1, 5}, {7, 3}, {3, 5}};

    int result;

    result = (new Solution())->maximumWealth(accounts);

    cout << result << endl;

    return 0;
}