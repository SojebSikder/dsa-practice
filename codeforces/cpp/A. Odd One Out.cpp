#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x == y)
    {
        cout << z << endl;
    }
    else if (x == z)
    {
        cout << y << endl;
    }
    else if (y == z)
    {
        cout << x << endl;
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