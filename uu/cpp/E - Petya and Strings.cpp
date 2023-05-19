#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long rows = (n + a - 1) / a;
    long long columns = (m + a - 1) / a;
    long long flagstones_needed = rows * columns;

    cout << flagstones_needed << endl;
}

int main()
{
    solve();
    return 0;
}