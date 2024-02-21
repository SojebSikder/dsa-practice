#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int goal = nums.size() - 1;

        for (int i = goal; i >= 0; i--)
        {
            if (i + nums[i] >= goal)
            {
                goal = i;
            }
        }

        if (goal == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};

    bool result = Solution().canJump(nums);

    cout << result << endl;

    return 0;
}