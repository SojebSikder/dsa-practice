#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right)
        {
            int area = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, area);

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return maxArea;
    }
};

int main()
{

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int result; // 49

    result = (new Solution())->maxArea(height);

    cout << result << endl;

    return 0;
}