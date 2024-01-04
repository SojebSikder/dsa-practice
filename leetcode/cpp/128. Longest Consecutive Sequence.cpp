#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int result = 0;
        unordered_set<int> s;

        for (auto i : nums)
        {
            s.insert(i);
        }

        for (auto i : nums)
        {
            if (s.find(i - 1) == s.end())
            {
                int currentNum = i;
                int currentStreak = 1;

                while (s.find(currentNum + 1) != s.end())
                {
                    currentNum += 1;
                    currentStreak += 1;
                }

                result = max(result, currentStreak);
            }
        }

        return result;
    }
};

int main()
{

    int result;
    vector<int> nums = {100, 4, 200, 1, 3, 2}; // 4
    // vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1}; // 9
    // vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6}; // 7
    // vector<int> nums = {};

    result = Solution().longestConsecutive(nums);

    cout << result << endl;

    return 0;
}