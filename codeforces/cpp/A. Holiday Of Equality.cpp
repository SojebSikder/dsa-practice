#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += max - a[i];
    }

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}