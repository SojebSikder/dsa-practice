#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans[v[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    solve();

    return 0;
}