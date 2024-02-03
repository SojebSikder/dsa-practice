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

    int odd = 0, even = 0, fine = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] % 2 == 0)
            {
                fine++;
            }
            else
            {
                even++;
            }
        }
        else
        {
            if (a[i] % 2 != 0)
            {
                fine++;
            }
            else
            {
                odd++;
            }
        }
    }

    if (fine == n)
    {
        cout << 0 << endl;
    }
    else if (odd != even)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << odd << endl;
    }
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