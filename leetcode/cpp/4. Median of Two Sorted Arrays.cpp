#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;

        for (int i = 0; i < nums1.size(); i++)
        {
            result.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            result.push_back(nums2[i]);
        }

        sort(result.begin(), result.end());

        if (result.size() % 2 == 0)
        {
            return (result[result.size() / 2] + result[result.size() / 2 - 1]) / 2.0;
        }
        else
        {
            return result[result.size() / 2];
        }
    }
};

int main()
{

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    double result; // 2.5

    result = (new Solution())->findMedianSortedArrays(nums1, nums2);

    cout << result << endl;

    return 0;
}