#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0, r = n - 1;
    int ans = n;

    while (l <= r)
    {
        if ((s[l] == '1' and s[r] == '0') or (s[l] == '0' and s[r] == '1'))
        {
            ans -= 2;
            l++;
            r--;
        }
        else
        {
            cout << ans << endl;
            return;
        }
    }
    cout << ans << endl;
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