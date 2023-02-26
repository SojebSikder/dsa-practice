#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;

    int ans = 0, seat = 0;
    int pass = 0;
    seat = x * 10;
    // seat-50,y-60
    if (seat >= y)
    {
        pass = seat - y;

        ans = (seat - pass) * z;

        cout << ans << endl;
    }
    else
    {
        pass = y - seat;

        ans = (y - pass) * z;

        cout << ans << endl;
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