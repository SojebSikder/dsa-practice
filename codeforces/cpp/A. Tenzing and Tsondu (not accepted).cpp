// failed on pretest 2
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int m, n;
    cin >> n >> m;

    vector<int> x(n), y(m);

    int Xsum = 0;
    int Ysum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        Xsum += x[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
        Ysum += y[i];
    }

    int ans = Xsum - Ysum;

    if (ans == 0)
    {
        cout << "Draw" << endl;
    }
    else if (ans > 0)
    {
        cout << "Tsondu" << endl;
    }
    else if (ans < 0)
    {
        cout << "Tenzing" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}