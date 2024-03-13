#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int MIN = INT_MAX;
    int MAX = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        MIN = min(MIN, a[i]);
        MAX = max(MAX, a[i]);
    }

    cout << MAX - MIN << endl;
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