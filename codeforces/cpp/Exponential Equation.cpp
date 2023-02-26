#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << 1 << " " << n / 2 << "\n";
    }
    else
    {
        cout << -1 << "\n";
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