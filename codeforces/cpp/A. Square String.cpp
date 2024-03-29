#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    int flag = 1;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[i + n / 2])
            {
                flag = 0;
            }
        }
    }
    else
    {
        flag = 0;
    }

    if (flag)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}