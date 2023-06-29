#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n, t;
    cin >> n >> t;

    reverse(n.begin(), n.end());

    if (n == t)
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
    solve();

    return 0;
}