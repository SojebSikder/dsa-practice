#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a % 2 != 0 && b % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        int x;
        if (a % 2 == 0)
        {
            x = a;
        }
        else
        {
            x = b;
        }

        int y;
        if (a % 2 == 0)
        {
            y = b;
        }
        else
        {
            y = a;
        }

        x = x / 2;
        if (x == y)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
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