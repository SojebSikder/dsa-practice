#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k, n, w;
    cin >> k >> n >> w;

    int ans = 0;

    int haveToPay = 0;
    for (int i = 1; i <= w; i++)
    {
        haveToPay += i * k;
    }

    int haveToBorrow = haveToPay - n;

    if (haveToBorrow > 0)
    {
        ans = haveToBorrow;
    }
    else if (haveToBorrow <= 0)
    {
        ans = 0;
    }
    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}