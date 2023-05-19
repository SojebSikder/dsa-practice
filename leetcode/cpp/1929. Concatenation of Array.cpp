#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(nums[i]);
        }

        return result;
    }
};

int main()
{

    vector<int> nums = {1, 3, 2, 1};

    vector<int> result;

    result = (new Solution())->getConcatenation(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}