#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        m[a[i]]++;
    }

    int ans = 0;
    for (auto i : m)
    {
        if (i.second == 1)
        {
            ans = i.first;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == ans)
        {
            cout << i + 1 << endl;
            break;
        }
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