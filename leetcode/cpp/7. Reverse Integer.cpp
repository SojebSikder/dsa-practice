#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long rev = 0;
        while (x != 0)
        {
            int pop = x % 10;
            x /= 10;

            rev = rev * 10 + pop;
        }
        if (rev > INT_MAX || rev < INT_MIN)
        {
            return 0;
        }
        else
        {
            return rev;
        }
    }
};

int main()
{

    int x = 123;

    int result;

    result = (new Solution())->reverse(x);

    cout << result << endl; // 321

    return 0;
}