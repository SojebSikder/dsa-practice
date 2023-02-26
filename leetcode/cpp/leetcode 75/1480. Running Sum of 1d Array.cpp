#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> result = {nums[0]};

        for (int i = 1; i < nums.size(); i++)
        {
            result.push_back(result.back() + nums[i]);
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result;

    result = (new Solution())->runningSum(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl; // 1,3,6,10
    }

    return 0;
}