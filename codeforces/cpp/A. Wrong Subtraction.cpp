#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int lastDigit = n % 10;
        if (lastDigit)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }

    cout << n << endl;
}

int main()
{
    solve();

    return 0;
}