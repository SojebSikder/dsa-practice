#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            result = result ^ nums[i];
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = Solution().singleNumber(nums);

    cout << result << endl;

    return 0;
}