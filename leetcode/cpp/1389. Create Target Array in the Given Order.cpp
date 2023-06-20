#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            result.insert(result.begin() + index[i], nums[i]);
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};

    vector<int> result;

    result = (new Solution())->createTargetArray(nums, index);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
