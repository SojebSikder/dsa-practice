#include <bits/stdc++.h>

using namespace std;
#define ll long long
int mod = 1e9 + 7;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll alice = a, bob = a;
    ll ans = a;
    while (b > 0 or c > 0 or d > 0)
    {
        if (bob > 0 and b > 0)
        {
            ll mn = min(b, bob);
            bob -= mn;
            alice += mn;
            ans += mn;
            b -= mn;
        }
        else if (alice > 0 and c > 0)
        {
            ll mn = min(c, alice);
            alice -= mn;
            bob += mn;
            ans += mn;
            c -= mn;
        }
        else if (alice > 0 and bob > 0 and d > 0)
        {
            ll mn = min(d, min(alice, bob));
            ans += mn;
            alice -= mn;
            bob -= mn;
            d -= mn;
        }
        else
        {
            if (b != 0 or c != 0 or d != 0)
                ans++;
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}