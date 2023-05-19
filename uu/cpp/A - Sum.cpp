#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b == c || a + c == b || b + c == a)
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
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