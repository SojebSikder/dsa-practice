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
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        curr += a[i];
        if (curr < k)
        {
            cout << "NO" << endl;
            return;
        }
        curr -= k;
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