#include <bits/stdc++.h>

using namespace std;
#define ll long long

int ans = 0;
void solve()
{
    string n;
    cin >> n;

    if (n == "++X" || n == "X++")
    {
        ans++;
    }
    else if (n == "++x" || n == "x++")
    {
        ans++;
    }
    else
    {
        ans--;
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

    cout << ans << endl;

    return 0;
}