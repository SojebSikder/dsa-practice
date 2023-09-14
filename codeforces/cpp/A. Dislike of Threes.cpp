#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k;
    cin >> k;

    int count = 0;

    for (int i = 1;; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            count++;
        }
        if (count == k)
        {
            cout << i << endl;
            break;
        }
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