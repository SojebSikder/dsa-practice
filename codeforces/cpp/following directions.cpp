#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    string n;
    cin >> n;

    string s;
    cin >> s;
    int x = 0, y = 0;
    for (auto i : s)
    {
        if (i == 'U')
        {
            y++;
        }
        if (i == 'L')
        {
            x--;
        }
        if (i == 'D')
        {
            y--;
        }
        if (i == 'R')
        {
            x++;
        }

        if (x == 1 and y == 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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