#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        k += a[i];
    }

    k = k / n;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < k)
        {
            cout << "NO" << endl;
            return;
        }
        a[i + 1] += a[i] - k;
        a[i] = k;
    }
    cout << "YES" << endl;
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