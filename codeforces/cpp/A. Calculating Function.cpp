#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << (n / 2) - n;
    }
}

int main()
{

    solve();

    return 0;
}