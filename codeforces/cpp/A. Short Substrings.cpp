#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    string ans = "";
    ans += s[0];
    
    for (int i = 1; i < s.size(); i += 2)
    {
        ans += s[i];
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