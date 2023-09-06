#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (5 - arr[i] >= k)
        {
            ans++;
        }
    }

    ans = ans / 3;

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}