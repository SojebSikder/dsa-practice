#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main()
{

    vector<int> nums1 = {3, 5, 2, 4, 1};
    int m;
    vector<int> nums2 = {3, 2, 1};
    int n;

    (new Solution())->merge(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << endl;
    }

    return 0;
}