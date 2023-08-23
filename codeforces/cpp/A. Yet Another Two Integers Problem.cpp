#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    int diff = abs(a - b);

    ans += diff / 10;

    if (diff % 10 != 0)
        ans++;

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