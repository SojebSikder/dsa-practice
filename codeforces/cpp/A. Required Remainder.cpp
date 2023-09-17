#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
    int ans = n - (n % x) + y;
    if (ans > n)
        ans -= x;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}