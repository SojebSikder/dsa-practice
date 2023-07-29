#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i].first == v[j].second)
                cnt++;
        }
        ans += cnt;
    }
    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}