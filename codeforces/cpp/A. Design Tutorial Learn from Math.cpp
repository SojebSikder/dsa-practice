#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n - 8 << " " << 8;
    }
    else
    {
        cout << n - 9 << " " << 9;
    }
}

int main()
{
    solve();

    return 0;
}