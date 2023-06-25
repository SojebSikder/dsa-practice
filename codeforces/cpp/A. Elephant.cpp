#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x;
    cin >> x;

    int ans = 0;
    ans += x / 5;

    if (x % 5 != 0)
        ans++;

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}