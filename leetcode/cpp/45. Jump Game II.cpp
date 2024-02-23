#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int res = 0;
        int l = 0, r = 0;

        while (r < nums.size() - 1)
        {
            int farthest = 0;

            for (int i = l; i <= r; i++)
            {
                farthest = max(farthest, i + nums[i]);
            }
            l = r + 1;
            r = farthest;
            res++;
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};

    int result = Solution().jump(nums);

    cout << result << endl;

    return 0;
}