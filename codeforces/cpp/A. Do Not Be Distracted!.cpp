#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (!flag)
        {
            break;
        }
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