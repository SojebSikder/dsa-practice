#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
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