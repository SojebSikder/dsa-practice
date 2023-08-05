#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int ans = max(n1, max(n2, n3)) - min(n1, min(n2, n3));

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}