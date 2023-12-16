#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n, 1);

        int left = 1;
        for (int i = 0; i < n; i++)
        {
            result[i] = left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};

int main()
{

    vector<int> result;
    vector<int> nums = {1, 2, 3, 4};

    result = Solution().productExceptSelf(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}