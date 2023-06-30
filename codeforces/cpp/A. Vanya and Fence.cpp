#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, h, a, w = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
            w += 2;
        else
            w++;
    }
    cout << w << endl;
}

int main()
{
    solve();

    return 0;
}