#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == -1 and v[i - 1] == -1)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << total + 4 << endl;
    }
    else
    {
        if (total == n)
        {
            cout << total - 4 << endl;
        }
        else
        {
            cout << total << endl;
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