#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        ans++;
    }

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}