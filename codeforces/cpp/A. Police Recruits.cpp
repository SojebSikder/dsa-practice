#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            sum += a[i];
        else if (a[i] < 0)
        {
            if (sum > 0)
                sum--;
            else
                ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}