#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();

        vector<int> result;
        vector<vector<int>> v(n + 1);
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }

        for (auto i : m)
        {
            v[i.second].push_back(i.first);
        }

        for (int i = n; i >= 0; i--)
        {
            for (auto j : v[i])
            {
                result.push_back(j);
                k--;
                if (k == 0)
                {
                    return result;
                }
            }
        }

        return result;
    }
};

int main()
{
    vector<int> result;

    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    result = Solution().topKFrequent(nums, k);

    for (auto i : result)
    {
        cout << i << endl;
    }

    return 0;
}