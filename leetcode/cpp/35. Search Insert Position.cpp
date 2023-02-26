#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int index = -1;
        int low = 0, high = nums.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                index = mid;
                break;
            }
            if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (index <= 0)
        {
            index = low;
        }

        return index;
    }
};

int main()
{

    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    int result;

    result = (new Solution())->searchInsert(nums, target);

    cout << result << endl; // 1

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }

    return 0;
}