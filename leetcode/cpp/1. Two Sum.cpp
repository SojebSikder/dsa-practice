#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> visited;

        int len = nums.size();

        for (int i = 0; i < len; ++i)
        {
            int n = nums[i];
            int complement = target - n;
            if (visited.count(complement))
            {
                return {visited[complement], i};
            }
            visited[n] = i;
        }
        return {};
    }
};

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result;

    result = (new Solution())->twoSum(nums, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}