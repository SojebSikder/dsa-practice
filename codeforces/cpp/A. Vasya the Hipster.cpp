#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b;
    int x, y;
    cin >> a >> b;
    x = min(a, b);
    y = (max(a, b) - x) / 2;
    cout << x << " " << y << endl;
}

int main()
{
    solve();

    return 0;
}