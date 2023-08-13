#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> v(4);

    for (int i = 0; i < 4; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++)
        cout << v[3] - v[i] << " ";
}

int main()
{
    solve();

    return 0;
}