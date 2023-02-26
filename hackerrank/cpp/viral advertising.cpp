#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n)
{
    int ans = 0, shared = 5;

    for (int i = 1; i <= n; i++)
    {
        ans += shared / 2;
        shared = (shared / 2) * 3;
    }

    return ans;
}

int main()
{
    int n = 3;

    int result;

    result = viralAdvertising(n);
    cout << result << endl; // 9
    return 0;
}