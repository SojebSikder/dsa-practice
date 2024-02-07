#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> current;

        dfs(candidates, target, 0, current, result, 0);

        return result;
    }

    void dfs(vector<int> &candidates, int target, int start, vector<int> &current, vector<vector<int>> &result, int total)
    {
        if (total == target)
        {
            result.push_back(current);
            return;
        }
        if (start >= candidates.size() || total > target)
            return;

        current.push_back(candidates[start]);
        dfs(candidates, target, start, current, result, total + candidates[start]);
        current.pop_back();
        dfs(candidates, target, start + 1, current, result, total);
    }
};

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = Solution().combinationSum(candidates, target);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}