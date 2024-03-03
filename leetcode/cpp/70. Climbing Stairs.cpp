#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // int climbStairs(int n)
    // {
    //     int prev2 = 1, prev1 = 1; // initally at 0th and 1st index

    //     for (int i = 2; i <= n; i++)
    //     {
    //         int curr = prev1 + prev2;
    //         prev2 = prev1; // update pointers
    //         prev1 = curr;
    //     }
    //     return prev1;
    // }
    int climbStairs(int n)
    {
        int one = 1, two = 1;

        for (int i = 1; i < n; i++)
        {
            int temp = one;
            one = one + two;
            two = temp;
        }
        return one;
    }
};

int main()
{
    int x = 2;

    int result; // 2

    result = (new Solution())->climbStairs(x);

    cout << result << endl;

    return 0;
}