#include <bits/stdc++.h>

using namespace std;
#define ll long long

int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    ll j = 1, ans;
    ans = n * (n - 1);
    while (j <= n)
    {
        ans = ((ans % mod) * j) % mod;
        j++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}