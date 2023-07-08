#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << setprecision(12) << sum / n << endl;
}

int main()
{

    solve();

    return 0;
}