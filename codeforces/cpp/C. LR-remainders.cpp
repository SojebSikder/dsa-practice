// wa: 'signed integer overflow'

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    string s;

    cin >> n >> m;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> s;

    long long _mul = 1;

    for (int i = 0; i < n; i++)
    {
        _mul = _mul * a[i];
    }

    long long _md = _mul % m;

    cout << _md << " ";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
        {
            // remove last element from the array
            a.pop_back();
            n--;
        }
        else if (s[i] == 'L')
        {
            // remove first element from the array
            a.erase(a.begin());
            n--;
        }

        long long mul = 1;

        for (int i = 0; i < n; i++)
        {
            mul = mul * a[i];
        }

        if (n == 0)
        {
        }
        else
        {
            long long md = mul % m;

            cout << md << " ";
        }
    }

    cout << endl;
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