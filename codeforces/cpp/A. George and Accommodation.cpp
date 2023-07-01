#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, p, q, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if (q - p >= 2)
            count++;
    }
    cout << count;
}

int main()
{

    solve();

    return 0;
}