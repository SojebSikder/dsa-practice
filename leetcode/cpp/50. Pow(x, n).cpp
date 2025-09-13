#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (x == 0)
        {
            return 0;
        }
        if (n == 0)
        {
            return 1;
        }


        long b = n;

        double result = helper(x, abs(b));

        if (n < 0)
        {
            result = 1 / result;
        }

        return result;
    }

private:
    double helper(double x, int n)
    {
        if (n == 0)
        {
            return 1;
        }

        double half = helper(x, n / 2);
        if (n % 2 == 0) {
           return half * half;
        } else {
            return x * half * half;
        }
    }
};

int main()
{

    double result = Solution().myPow(1, 2147483647);

    cout << result << endl;

    return 0;
}