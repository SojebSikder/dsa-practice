#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int coins = 0;
    int thorns = 0;

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (thorns > 1)
        {
            cout << coins << endl;
            found = 1;
            break;
        }
        if (s[i] == '@')
        {
            coins++;
            thorns = 0;
        }
        else if (s[i] == '*')
        {
            thorns++;
        }
        else
        {
            thorns = 0;
        }
    }

    if (found == 0)
    {
        cout << coins << endl;
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