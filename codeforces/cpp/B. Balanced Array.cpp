#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 4 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
        sum += i;
    }
    for (int i = 1; i < n - 2; i += 2)
    {
        cout << i << " ";
        sum -= i;
    }
    cout << sum << endl;
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