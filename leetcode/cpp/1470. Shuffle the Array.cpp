#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> result;

        for (int i = 0; i < n; i++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }

        return result;
    }
};

int main()
{

    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> result;

    result = (new Solution())->shuffle(nums, n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}