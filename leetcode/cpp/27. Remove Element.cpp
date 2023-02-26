#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                ans.push_back(nums[i]);
            }
        }

        nums = ans;

        return ans.size();
    }
};

int main()
{

    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int result;

    result = (new Solution())->removeElement(nums, val);

    cout << result << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl; // 2,nums={2,2}
    }

    return 0;
}