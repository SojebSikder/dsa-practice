#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int l = 26;
    string mins = "zzz", cur;

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < l; k++)
            {
                if (i + j + k + 3 == n)
                {
                    cur += char(i + 'a');
                    cur += char(j + 'a');
                    cur += char(k + 'a');

                    if (cur < mins)
                    {
                        mins = cur;
                    }
                }
            }
        }
    }

    cout << mins << endl;
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