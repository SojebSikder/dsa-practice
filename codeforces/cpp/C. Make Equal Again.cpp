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

    int i1 = 0, i2 = 0;

    while ((i1 < n) && (a[i1] == a[0]))
    {
        i1++;
    }

    while ((i2 < n) && (a[n - i2 - 1] == a[n - 1]))
    {
        i2++;
    }

    int res = n;
    
    if (a[0] == a[n - 1])
    {
        res -= i1;
        res -= i2;
    }
    else
    {
        res -= max(i1, i2);
    }

    cout << max(0, res) << endl;
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