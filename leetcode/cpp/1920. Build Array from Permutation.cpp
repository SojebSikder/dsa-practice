#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(nums[nums[i]]);
        }

        return result;
    }
};

int main()
{

    vector<int> nums = {0, 2, 1, 5, 3, 4};

    vector<int> result;

    result = (new Solution())->buildArray(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}