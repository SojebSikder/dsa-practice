#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        vector<int> result;

        vector<int> leftSumArr = {0};
        vector<int> rightSumArr;

        int leftSum = 0, rightSum = 0;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            leftSum += nums[i];

            leftSumArr.push_back(leftSum);
        }

        for (int i = nums.size() - 1; i > 0; i--)
        {
            rightSum += nums[i];
            rightSumArr.push_back(rightSum);
        }
        reverse(rightSumArr.begin(), rightSumArr.end());
        rightSumArr.push_back(0);

        for (int i = 0; i < leftSumArr.size(); i++)
        {
            result.push_back(abs(leftSumArr[i] - rightSumArr[i]));
        }

        return result;
    }
};

int main()
{
    vector<int> nums = {10, 4, 8, 3};

    vector<int> result;

    result = (new Solution())->leftRightDifference(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}