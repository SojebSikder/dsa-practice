#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> visited;

        while (visited.find(n) == visited.end())
        {
            visited.insert(n);
            n = sumOfSquares(n);

            if (n == 1)
            {
                return true;
            }
        }

        return false;
    }

    int sumOfSquares(int n)
    {
        int total_sum = 0;
        while (n > 0)
        {
            int d = n % 10;
            n = n / 10;
            total_sum += d * d;
        }
        return total_sum;
    }
};

int main()
{

    int n = 19;

    bool result = Solution().isHappy(n);

    cout << result << endl;

    return 0;
}