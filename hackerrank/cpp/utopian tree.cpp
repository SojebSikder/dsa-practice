#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            ans *= 2;
        }
        else
        {
            ans += 1;
        }
    }
    return ans;
}

int main()
{
    int n = 4;

    int result;

    result = utopianTree(n);
    cout << result << endl; // 7

    return 0;
}