#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long cnt = 0;

    for (long long i = 1; i < 100; i++)
    {
        if (n % i == 0)
            cnt++;
        else
            break;
    }
    cout << cnt << '\n';
}

signed main()
{
    long long t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}