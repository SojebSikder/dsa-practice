#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int sum = 0, leftsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (leftsum == sum - leftsum - nums[i])
                return i;
            leftsum += nums[i];
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int result;

    result = (new Solution())->pivotIndex(nums);

    cout << result << endl; // 3

    return 0;
}