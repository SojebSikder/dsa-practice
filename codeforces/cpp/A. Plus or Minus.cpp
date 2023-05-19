#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y == z)
    {
        cout << "+" << endl;
    }
    else if (x - y == z)
    {
        cout << "-" << endl;
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