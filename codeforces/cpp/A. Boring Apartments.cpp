#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string x;
    cin >> x;

    int dig = x[0] - '0' - 1;

    int len = x.size();

    cout << dig * 10 + len * (len + 1) / 2 << endl;
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