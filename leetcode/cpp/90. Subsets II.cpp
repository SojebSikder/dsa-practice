#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        backtrack(result, subset, nums, 0);
        return result;
    }

    void backtrack(vector<vector<int>> &result, vector<int> &subset, vector<int> &nums, int start)
    {
        result.push_back(subset);
        for (int i = start; i < nums.size(); i++)
        {
            if (i > start && nums[i] == nums[i - 1])
            {
                continue;
            }
            subset.push_back(nums[i]);
            backtrack(result, subset, nums, i + 1);
            subset.pop_back();
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 2};

    vector<vector<int>> result = Solution().subsetsWithDup(nums);

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