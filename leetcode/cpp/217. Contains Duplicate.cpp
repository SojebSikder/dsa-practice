#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> seen;
        for (int num : nums)
        {
            if (seen[num] >= 1)
                return true;
            seen[num]++;
        }
        return false;
    }
};

int main()
{

    bool result;
    vector<int> nums = {1, 2, 3, 1};

    result = Solution().containsDuplicate(nums);

    cout << result << endl;

    return 0;
}