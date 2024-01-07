#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int n = numbers.size();

        int left = 0;
        int right = n - 1;

        while (left < right)
        {
            int sum = numbers[left] + numbers[right];

            if (sum == target)
            {
                return {left + 1, right + 1};
            }

            if (sum > target)
            {
                right--;
            }
            else if (sum < target)
            {
                left++;
            }
        }

        return {};
    }
};

int main()
{

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = Solution().twoSum(numbers, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}