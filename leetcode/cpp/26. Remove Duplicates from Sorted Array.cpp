#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> result;
        set<int> uniqueValues;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            uniqueValues.insert(nums[i]);
        }

        for (int el : uniqueValues)
        {
            result.push_back(el);
        }
        nums = result;

        ans = uniqueValues.size();
        return ans;
    }
};

int main()
{

    int result;
    vector<int> nums = {1, 1, 2};

    result = (new Solution())->removeDuplicates(nums);

    cout << result << endl; // 2, nums = {1,2,_}

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}