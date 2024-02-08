#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // vector<vector<int>> permute(vector<int> &nums)
    // {
    //     vector<vector<int>> result;
    //     vector<int> current;

    //     // base case
    //     if (nums.size() == 1)
    //     {
    //         result.push_back(nums);
    //         return result;
    //     }

    //     for (int i = 0; i < nums.size(); i++)
    //     {
    //         vector<int> temp = nums;
    //         temp.erase(temp.begin() + i);

    //         vector<vector<int>> tempResult = permute(temp);

    //         for (auto j : tempResult)
    //         {
    //             current = {nums[i]};
    //             current.insert(current.end(), j.begin(), j.end());
    //             result.push_back(current);
    //         }
    //     }

    //     return result;
    // }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> visited(nums.size(), false);

        dfs(result, nums, current, visited);

        return result;
    }

    void dfs(vector<vector<int>> &result, vector<int> &nums, vector<int> &current, vector<bool> &visited)
    {
        // base case
        if (current.size() == nums.size())
        {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[i])
            {
                // make choice
                visited[i] = true;
                current.push_back(nums[i]);
                dfs(result, nums, current, visited);
                // undo the choice/ backtrack
                visited[i] = false;
                current.pop_back();
            }
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = Solution().permute(nums);

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