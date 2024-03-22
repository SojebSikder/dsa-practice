#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int x;
    int j;

    if (n % 2 == 0)
    {
        x = a[n / 2 - 1];
        j = n / 2 - 1;
    }
    else
    {
        x = a[n / 2];
        j = n / 2;
    }

    int ans = 0;
    
    for (int i = j; i < n; i++)
    {
        if (a[i] == x)
        {
            ans++;
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