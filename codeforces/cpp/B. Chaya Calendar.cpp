#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > ans)
        {
            ans = a[i];
        }
        else
        {
            ans = ((ans / a[i]) + 1) * a[i];
        }
    }

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