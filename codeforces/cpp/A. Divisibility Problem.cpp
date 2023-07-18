#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a % b == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << b - (a % b) << endl;
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