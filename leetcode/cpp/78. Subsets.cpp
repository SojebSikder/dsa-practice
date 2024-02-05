#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> result;
    vector<int> subset;

    vector<vector<int>> subsets(vector<int> &nums)
    {
        dfs(0, nums);

        return result;
    }

    void dfs(int i, vector<int> &nums)
    {
        if (i >= nums.size())
        {
            result.push_back(subset);
            return;
        }
        // decision to include nums[i]
        subset.push_back(nums[i]);
        dfs(i + 1, nums);

        // decision to not to include nums[i]
        subset.pop_back();
        dfs(i + 1, nums);
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = Solution().subsets(nums);

    for (auto i : result)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}