#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin >> n;

    string fd = n[0] + "" + n[1] + n[2];

    string ld = n[n.length() - 1] + "" + n[n.length() - 2] + n[n.length() - 3];

    if (fd == ld)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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