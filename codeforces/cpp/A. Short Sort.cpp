#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s == "bca" || s == "cab")
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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