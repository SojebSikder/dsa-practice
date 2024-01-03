#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;

    int minVal = min(a, min(b, c));
    int maxVal = max(a, max(b, c));

    if (a != minVal && a != maxVal)
        ans = a;
    else if (b != minVal && b != maxVal)
        ans = b;
    else
        ans = c;

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