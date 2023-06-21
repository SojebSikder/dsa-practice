#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> result;

        for (int i = 0; i < nums.size() - 1; i += 2)
        {
            int freq = nums[i];
            int value = nums[i + 1];

            for (int i = 0; i < freq; i++)
            {
                result.push_back(value);
            }
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result;

    result = (new Solution())->decompressRLElist(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
