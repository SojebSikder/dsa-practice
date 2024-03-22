#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int getSum(int a, int b)
    {
        while (b != 0)
        {
            int carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
        return a;
    }
};

int main()
{

    int result = Solution().getSum(1, 2);

    cout << result << endl;

    return 0;
}