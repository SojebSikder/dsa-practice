#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> p, m, pe;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            p.push_back(i);
        }
        else if (a[i] == 2)
        {
            m.push_back(i);
        }
        else if (a[i] == 3)
        {
            pe.push_back(i);
        }
    }

    int w = min(p.size(), min(m.size(), pe.size()));

    cout << w << endl;

    for (int i = 0; i < w; i++)
    {
        cout << p[i] + 1 << " " << m[i] + 1 << " " << pe[i] + 1 << endl;
    }
}

int main()
{
    solve();

    return 0;
}